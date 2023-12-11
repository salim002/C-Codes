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

void cnt_dfs(vector<vl> &adj_list, ll curr, ll parent, vl &cnt){
    for(auto it:adj_list[curr]){
        if(it!=parent){
            cnt_dfs(adj_list, it, curr, cnt);
            cnt[curr]+=cnt[it];
        }
    }
    cnt[curr]++;
}

void val_dfs(vector<vl> &adj_list, ll curr, ll parent, vl &val, vl &cnt, vl &v){
    for(auto it:adj_list[curr]){
        if(it!=parent){
            val_dfs(adj_list, it, curr, val, cnt, v);
            val[curr]+=((v[curr]^v[it])*cnt[it] + val[it]);
        }
    }
}

void sol_dfs(vector<vl> &adj_list, ll curr, ll parent, vl &cnt, vl &val, vl &v, vl &ans){
    ans[curr]=val[curr];
    for(auto it:adj_list[curr]){
        if(it!=parent){
            val[curr]-=(val[it]+((v[curr]^v[it])*cnt[it]));
            cnt[curr]-=cnt[it];
            cnt[it]+=cnt[curr];
            val[it]+=(val[curr]+((v[it]^v[curr])*cnt[curr]));
            sol_dfs(adj_list, it, curr, cnt, val, v, ans);
            val[it]-=(val[curr]+((v[it]^v[curr])*cnt[curr]));
            cnt[it]-=cnt[curr];
            cnt[curr]+=cnt[it];
            val[curr]+=(val[it]+((v[curr]^v[it])*cnt[it]));
        }
    }
}

void solve(){
    ll n;
    cin>>n;
    vl v(n);
    for(ll i=0; i<n; i++){
        cin>>v[i];
    }
    vector<vl> adj_list(n);
    for(ll i=0; i<n-1; i++){
        ll x, y;
        cin>>x>>y;
        x--; y--;
        adj_list[x].push_back(y);
        adj_list[y].push_back(x);
    }
    vl cnt(n), val(n), ans(n);
    cnt_dfs(adj_list, 0, -1, cnt);
    val_dfs(adj_list, 0, -1, val, cnt, v);
    sol_dfs(adj_list, 0, -1, cnt, val, v, ans);
    for(auto it:ans){
        cout<<it<<" ";
    }
    cout<<'\n';
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