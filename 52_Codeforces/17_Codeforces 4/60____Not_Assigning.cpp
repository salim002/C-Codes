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
    vector<vi> adj_list(n+1);
    vi deg(n+1);
    map<pair<int, int>, int> edges;
    for(int i=0; i<n-1; i++){
        int u, v;
        cin>>u>>v;
        deg[u]++;
        deg[v]++;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
        pair<int, int> p={u, v};
        edges[p]=i;
        swap(p.first, p.second);
        edges[p]=i;
    }
    if(*max_element(all(deg))>2){
        cout<<-1<<endl;
        return;
    }
    int start=0;
    for(int i=1; i<=n; i++){
        if(deg[i]==1){
            start=i;
            break;
        }
    }
    queue<int> q;
    vector<bool> vis(n+1);
    vi ans(n-1);
    int val=2;
    q.push(start);
    vis[start]=true;
    while(!q.empty()){
        int node = q.front();
        q.pop();
        for(auto it:adj_list[node]){
            if(!vis[it]){
                vis[it]=true;
                q.push(it);
                pair<int, int> tmp = {node, it};
                int idx=edges[tmp];
                ans[idx]=val;
                if(val==2){
                    val=3;
                }
                else{
                    val=2;
                }
            }
        }
    }
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