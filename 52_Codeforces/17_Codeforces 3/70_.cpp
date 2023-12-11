#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;

typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<ld> vd;

#define fi first
#define se second
#define mp make_pair
#define pb push_back
const int mod = 1000000007;
// const int mod = 998244353;
#define all(x) x.begin(), x.end()
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

ll fac(ll n){
    ll res=1;
    for(ll i=2; i<=n; i++){
        res*=i;
    }
    return res;
}

ll nCr(ll n, ll r){
    return fac(n)/(fac(r) * fac(n-r));
}

void solve(){
    ll n, i;
    cin>>n; 
    vl v(n);
    string s;
    cin>>s;
    for(i=0; i<n; i++){
        cin>>v[i];
    }
    ll ans=0;
    if(s[0]=='1'){
        ans+=v[0];
    }
    for(i=0; i<n; i++){
        if( i==0 && s[i]=='1'){
            continue;
        }
        if(s[i]=='1'){
            ans+=v[i];
            continue;
        }
        if(s[i+1]=='1' && i+1<n){
            ll temp=v[i], sum=v[i];
            while(s[i+1]=='1' && i+1<n){
                sum+=v[i+1];
                temp=min(temp, v[i+1]);
                i++;
            }
            sum-=temp;
            ans+=sum;
        }
        else{
            continue;
        }
    }
    cout<<ans<<endl;
}

int main(){
    fast_io
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}