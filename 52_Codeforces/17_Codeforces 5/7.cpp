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

void solve(){
    ll n, k;
    cin>>n>>k;
    vector<vector<ll>> v(n, vector<ll>(n)), p(n, vector<ll>(n));
    for(ll i=0; i<n; i++){
        for(ll j=0; j<n; j++){
            cin>>v[i][j];
        }
    }
    for(ll i=n-1; i>=0; i--){
        for(ll j=n-1; j>=0; j--){
            p[n-i-1][n-j-1]=v[i][j];
        }
    }
    if(n==1){
        cout<<"YES"<<'\n';
        return;
    }
    // if(v==p){
    //     cout<<"YES"<<'\n';
    //     return;
    // }
    ll cnt=0;
    for(ll i=0; i<n; i++){
        for(ll j=0; j<n; j++){
            if(v[i][j]!=p[i][j]){
                cnt++;
            }
        }
    }
    cnt/=2;
    if(cnt>k){
        cout<<"NO"<<'\n';
        return;
    }
    if(cnt==k){
        cout<<"YES"<<'\n';
        return;
    }
    k-=cnt;
    if(k%2==0 || n&1){
        cout<<"YES"<<'\n';
    }
    else{
        cout<<"NO"<<'\n';
    }

    // cout<<endl;
    // for(auto it:p){
    //     for(auto i:it){
    //         cout<<i<<" ";
    //     }
    //     cout<<endl;
    // }
    // cout<<endl<<endl;
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