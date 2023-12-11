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
    return ((a%M)*(b%M))%M;
}

ll modPower(ll a, ll b){
    if(b==0){
        return 1;
    }
    a = a%M;
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
    return mul(a, modPower(b, M-2));
}

ll nCr(ll n, ll r){
    return dv(fac(n), mul(fac(r), fac(n-r)));
}

bool fun(vl v, int n, int m){
    vl p(m, 0);
    for(int i=0; i<n; i++){
        int tmp=v[i]%m;
        p[tmp]++;
    }
    for(auto it:p){
        if(it<=1){
            return true;
        }
    }
    return false;
}

void solve(){
    int n;
    cin>>n;
    vl v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    sort(all(v));
    ll mn=1e18;
    int l=0, r=1;
    for(int i=0; i<n-1; i++){
        if((v[i+1]-v[i])<mn){
            mn=v[i+1]-v[i];
            l=i;
            r=i+1;
        }
    }
    ll x=v[l], y=v[r];
    if(x==y){
        cout<<"NO"<<endl;
        return;
    }
    ll k=1;
    bool ok=true;
    for(int i=2; i<=n; i++){
        ok = fun(v, n, i);
        if(!ok){
            break;
        }
    }
    if(ok){
        cout<<"YES"<<endl;
        return;
    }
    cout<<"NO"<<endl;
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