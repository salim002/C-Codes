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
    int n, a, b;
    cin>>n>>a>>b;
    map<pair<int, int>, int> mp;
    while(n--){
        int x, y;
        cin>>x>>y;
        int dy=y-b, dx=x-a;
        if(dy==0) mp[{0, 1e5}]++;
        else if(dx==0) mp[{1e5, 0}]++;
        else{
            int g = __gcd(abs(dy), abs(dx));
            dy/=g;
            dx/=g;
            if((dy>0 && dx>0) || (dy<0 && dx<0)) mp[{abs(dy), abs(dx)}]++;
            else mp[{-1*abs(dy), abs(dx)}]++;
        }
    }
    cout<<mp.size()<<'\n';
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