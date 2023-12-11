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

void fun(vector<vi> &mat, int i, int j, int val, int cnt){
    if(cnt<=0){
        return;
    }
    mat[i][j]=val;
    if(j-1>=0 && !mat[i][j-1]){
        fun(mat, i, j-1, val, cnt-1);
    }
    else{
        fun(mat, i+1, j, val, cnt-1);
    }
}

void solve(){
    int n;
    cin>>n;
    vi v(n);
    vector<vi> mat(n, vi(n));
    for(int i=0; i<n; i++){
        cin>>v[i];
        fun(mat, i, i, v[i], v[i]);
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<'\n';
    }
}

int main(){
    fast_io
    // int t;
    // cin>>t;
    // while(t--){
    // }
    solve();
    return 0;
}