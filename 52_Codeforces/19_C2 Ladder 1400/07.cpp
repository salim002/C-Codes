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
    int n, m, x;
    cin>>n>>m>>x;
    vi v(n), ans(n);
    vector<pair<int, int>> p;
    for(int i=0; i<n; i++){
        cin>>v[i];
        p.push_back({v[i], i});
    }
    sort(all(p));
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    int cnt=1;
    for(int i=n-1; i>=n-m; i--){
        pq.push({p[i].first, cnt});
        ans[p[i].second]=cnt;
        cnt++;
    }
    // cout<<'\n';
    // while(!pq.empty()){
    //     auto curr=pq.top();
    //     pq.pop();
    //     cout<<curr.first<<" "<<curr.second<<'\n';
    // }
    // for(auto it:ans){
    //     cout<<it<<" ";
    // }
    // cout<<'\n';
    for(int i=n-m-1; i>=0; i--){
        auto curr=pq.top();
        pq.pop();
        int val=curr.first;
        val+=p[i].first;
        ans[p[i].second]=curr.second;
        pq.push({val, curr.second});
    }
    int mx=INT_MIN, mn=INT_MAX;
    while(!pq.empty()){
        auto curr=pq.top();
        pq.pop();
        mx=max(mx, curr.first);
        mn=min(mn, curr.first);
    }
    if(mx-mn>x){
        cout<<"NO";
        return;
    }
    cout<<"YES"<<'\n';
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