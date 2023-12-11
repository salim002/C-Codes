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
    int n;
    cin>>n;
    vector<vector<int>> v(5, vector<int>(n));
    for(int i=0; i<5; i++){
        for(int j=0; j<n; j++){
            cin>>v[i][j];
        }
    }
    int l=0, r=0;
    for(int i=0; i<n; i++){
        if(v[3][i]!=v[4][i]){
            if(!l){
                l=i;
            }
            else{
                r=i;
            }
        }
    }
    vector<int> ans=v[0];
    sort(all(ans));
    if(v[3]==v[4]){
        reverse(all(ans));
    }
    for(auto it:ans){
        cout<<it<<endl;
    }
    
}

int main(){
    fast_io
    int t;
    solve();
    return 0;
}