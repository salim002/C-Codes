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
    ll n, m;
    cin>>n>>m;
    if(n>=m){
        cout<<n-m<<'\n';
        return;
    }
    unordered_map<int, bool> vis;
    queue<int> q;
    q.push(n);
    vis[n]=true;
    int ans=0;
    while(!q.empty()){
        int k=q.size();
        while(k--){
            int curr=q.front();
            q.pop();
            if(curr==m){
                cout<<ans<<'\n';
                return;
            }
            if(curr-1>0 && !vis[curr-1]){
                q.push(curr-1);
                vis[curr-1]=true;
            }
            if(2*curr<=2*m && !vis[2*curr]){
                q.push(2*curr);
                vis[2*curr]=true;
            }
        }
        ans++;
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