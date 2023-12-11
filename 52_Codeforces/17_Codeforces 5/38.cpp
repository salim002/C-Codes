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
#define pb push_back
#define all(x) x.begin(), x.end()
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

const int mod = 1000000007;
const ll M = 998244353;

ll mul(ll a, ll b){
    return ((a%mod)*(b%mod))%mod;
}

ll modPower(ll a, ll b){
    if(b==0){
        return 1;
    }
    a = a%mod;
    ll res=1;
    while(b>0){
        if(b&1){
            res = mul(res, a);
        }
        b = b>>1;
        a = mul(a, a);
    }
    return res;
}

ll fac(ll n){
    ll res=1;
    for(ll i=2; i<=n; i++){
        res = mul(res, i);
    }
    return res;
}

ll dv(ll a, ll b){
    return mul(a, modPower(b, mod-2));
}

ll nCr(ll n, ll r){
    return dv(fac(n), mul(fac(r), fac(n-r)));
}

void solve(){
    int n, m;
    cin>>n>>m;
    vi a(n), b(m);
    vi v(32), p(32), q(32);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<m; i++){
        cin>>b[i];
    }
    for(int i=0; i<32; i++){
        for(int j=0; j<n; j++){
            if((a[j]>>i)>0){
                v[i]++;
            }
            if(((a[j]>>i)&1)){
                q[i]++;
            }
        }
        for(int j=0; j<m; j++){
            if(((b[j]>>i)&1)){
                p[i]=1;
            }
        }
    }
    int mn=0, mx=0;
    for(int i=0; i<32; i++){
        if(q[i]%2==1){
            if(!p[i]){
                mn+=(1<<i);
            }
            else{
                if(n%2==1){
                    mn+=(1<<i);
                }
            }
            mx+=(1<<i);
        }
        else{
            if(n%2==1 && p[i]){
                mx+=(1<<i);
            }
        }
    }
    // for(auto it:v){
    //     cout<<it<<" ";
    // }
    // cout<<endl;
    // for(auto it:p){
    //     cout<<it<<" ";
    // }
    // cout<<endl;
    // for(auto it:q){
    //     cout<<it<<" ";
    // }
    // cout<<endl;
    cout<<mn<<" "<<mx<<'\n';
}

int main(){
    fast_io
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}