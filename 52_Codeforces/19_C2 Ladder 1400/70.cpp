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
    string s;
    cin>>s;
    map<vector<int>, bool> mp;
    int x=0, y=0, ans=0;
    for(auto it:s){
        if(it=='N'){
            if(mp[{x, y, y+1, 1}] || mp[{x, y+1, y, 1}]){
                ans++;
            }
            else{
                ans+=5;
                mp[{x, y, y+1, 1}]=true;
                mp[{x, y+1, y, 1}]=true;
            }
            y++;
        } else if(it=='S'){
            if(mp[{x, y, y-1, 1}] || mp[{x, y-1, y, 1}]){
                ans++;
            }
            else{
                ans+=5;
                mp[{x, y, y-1, 1}]=true;
                mp[{x, y-1, y, 1}]=true;
            }
            y--;
        } else if(it=='E'){
            if(mp[{y, x, x+1, 0}] || mp[{y, x+1, x, 0}]){
                ans++;
            }
            else{
                ans+=5;
                mp[{y, x, x+1, 0}]=true;
                mp[{y, x+1, x, 0}]=true;
            }
            x++;
        } else{
            if(mp[{y, x, x-1, 0}] || mp[{y, x-1, x, 0}]){
                ans++;
            }
            else{
                ans+=5;
                mp[{y, x, x-1, 0}]=true;
                mp[{y, x-1, x, 0}]=true;
            }
            x--;
        }
    }
    cout<<ans<<'\n';
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