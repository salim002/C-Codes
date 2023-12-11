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

class DSU{
    public:
    vi parent, rank;
    DSU(int n){
        parent.resize(n+1);
        rank.resize(n+1);
        for(int i=1; i<=n; i++){
            parent[i]=i;
        }
    }
    int find_set(int n){
        if(parent[n]==n){
            return n;
        }
        return parent[n]=find_set(parent[n]);
    }
    void unionByRank(int a, int b){
        a=find_set(a);
        b=find_set(b);
        if(a==b){
            return;
        }
        if(rank[a]<rank[b]){
            parent[b]=a;
        }
        else if(rank[a]>rank[b]){
            parent[a]=b;
        }
        else{
            parent[b]=a;
            rank[a]++;
        }
    }
    bool check(int a, int b){
        a=find_set(a);
        b=find_set(b);
        return a==b;
    }
};

void solve(){
    int n, m1, m2;
    cin>>n>>m1>>m2;
    DSU ds1(n), ds2(n);
    for(int i=0; i<m1; i++){
        int u, v;
        cin>>u>>v;
        ds1.unionByRank(u, v);
    }
    for(int i=0; i<m2; i++){
        int u, v;
        cin>>u>>v;
        ds2.unionByRank(u, v);
    }
    vector<pair<int, int>> ans;
    for(int i=2; i<=n; i++){
        if(!ds1.check(1, i) && !ds2.check(1, i)){
            ans.push_back({1, i});
            ds1.unionByRank(1, i);
            ds2.unionByRank(1, i);
        }
    }
    int i=2, j=2;
    vector<bool> vis(n+1);
    while(i<=n && j<=n){
        while(i<=n && (ds1.check(1, i) || vis[ds1.find_set(i)])){
            i++;
        }
        while(j<=n && (ds2.check(1, j) || vis[ds2.find_set(j)])){
            j++;
        }
        if(i>n || j>n){
            break;
        }
        ans.push_back({i, j});
        vis[ds1.find_set(i)] = vis[ds2.find_set(j)]=true;
    }
    cout<<ans.size()<<'\n';
    for(auto it:ans){
        cout<<it.first<<" "<<it.second<<'\n';
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