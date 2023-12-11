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
    int n, m;
    cin>>n>>m;
    vector<vector<int>> v(n), ans(n);
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            int x;
            cin>>x;
            v[i].push_back(x);
        }
    }
    for(int i=0; i<n; i++){
        sort(all(v[i]));
    }
    for(int j=0; j<m; j++){
        int mn=INT_MAX, idx=-1;
        for(int i=0; i<n; i++){
            if(v[i][0]<mn){
                mn=v[i][0];
                idx=i;
            }
        }
        for(int i=0; i<n; i++){
            if(i==idx){
                ans[i].push_back(v[i][0]);
                v[i].erase(v[i].begin());
            }
            else{
                ans[i].push_back(v[i][v[i].size()-1]);
                v[i].pop_back();
            }
        }
    }
    for(auto it:ans){
        for(auto i:it){
            cout<<i<<" ";
        }
        cout<<endl;
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