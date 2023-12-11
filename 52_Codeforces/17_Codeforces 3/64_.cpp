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
    ll n, q, i;
    cin>>n>>q;
    vl v(n);
    ll o=0, e=0, sum=0;
    for(i=0; i<n; i++){
        cin>>v[i];
        sum+=v[i];
        if(v[i]%2==0){
            e++;
        }
        else{
            o++;
        }
    }
    bool ok=false;
    while(q--){
        ll a, b;
        cin>>a>>b;
        if(a==0){
            sum+=e*b;
            cout<<sum<<endl;
            if(b%2==1){
                e=0;
                o=n;
            }
        }
        else{
            sum+=o*b;
            cout<<sum<<endl;
            if(b%2==1){
                o=0;
                e=n;
            }
        }
    }
    
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