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

const int N=2e5;
vector<pair<int, int>> adj[N];
int ans=0;
 
void dfs(int u, int p, int ind, int z=0) {
	ans=max(ans,z);
	for(auto e:adj[u]) {
		int v=e.first, i=e.second;
		if (v==p){
            continue;
        }
		dfs(v,u,i,z+(i<ind));
	}
}
 
void solve(){
	int n; 
    cin>>n;
    for(int i=0; i<n; i++){
        adj[i].clear();
    }
	for(int i=0; i<n-1; i++){
        int u,v; 
        cin>>u>>v; 
        --u, --v;
		adj[u].pb({v,i}); adj[v].pb({u,i});
    }
	ans=0;
	dfs(0,-1,-1);
	cout<<ans+1<<endl;
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