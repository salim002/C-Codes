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

bool isPowerOfTwo(ll n){
    return n && (!(n&(n-1)));
}

void solve(){
    ll n, i;
    cin>>n;
    string s;
    cin>>s;
    vl v(n+1), p(n+1);
    for(i=0; i<n; i++){
        v[i+1]=(s[i]=='1');
    }
    for(i=n; i>=1; i--){
        for(ll j=i; j<=n; j+=i){
            if(v[j]){
                break;
            }
            else{
                p[j]=i;
            }
        }
    }
    ll ans=0; 
    for(i=1; i<=n; i++){
        if(!v[i]){
            ans+=p[i];
        }
    }
    cout<<ans<<endl;
    // for(i=1; i<=n; i++){
    //     cout<<v[i]<<" ";
    // }
    // cout<<endl;
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