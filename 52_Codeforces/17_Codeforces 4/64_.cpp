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
    vi v(n+1);
    vector<vi> a(n+1);
    map<int, int> mp;
    for(int i=1; i<=n; i++){
        cin>>v[i];
        mp[v[i]]++;
        a[v[i]].push_back(i);
    }
    if(*max_element(all(v))!=n){
        cout<<"NO"<<'\n';
        return;
    }
    if(mp[1]>1){
        cout<<"NO"<<'\n';
        return;
    }
    for(auto it:mp){
        if(it.first>n || it.second>2){
            cout<<"NO"<<'\n';
            return;
        }
    }
    // vector<bool> vis(n+1);
    // priority_queue<int> mx_heap;
    // priority_queue<int, vector<int>, greater<int>> mn_heap;
    // vi ans(n+1);
    // for(int i=1; i<=n; i++){
    //     if(mp[v[i]]==1){
    //         ans[i]=v[i];
    //         vis[v[i]]=true;
    //     }
    // }
    // for(int i=1; i<=n; i++){
    //     if(!vis[i]){
    //         mx_heap.push(i);
    //         mn_heap.push(i);
    //     }
    // }
    // for(int i=1; i<=n; i++){
    // if(vis[i]){
    //     p[i]=v[i];
    //     q[i]=v[i];
    // }
    // else{
    //     p[i]=mx_heap.top();
    //     mx_heap.pop();
    //     q[i]=mn_heap.top();
    //     mn_heap.pop();
    // }
    // }
    // for(int i=1; i<=n; i++){
    //     cout<<p[i]<<" ";
    // }
    // cout<<'\n';
    // for(int i=1; i<=n; i++){
    //     cout<<q[i]<<" ";
    // }
    // cout<<'\n';
    vi x, y, p(n+1), q(n+1);
    for(int i=n; i>=1; i--){
        if(a[i].size()==2){
            x.push_back(a[i][1]);
            y.push_back(a[i][0]);
            p[a[i][0]] = i;
            q[a[i][1]] = i;
        }
        else if(a[i].size()==1){
            p[a[i][0]]=i;
            q[a[i][0]]=i;
        }
        else{
            if(x.empty()){
                cout<<"NO"<<'\n';
                return;
            }
            int k1 = x.back(), k2=y.back();
            x.pop_back();
            y.pop_back();
            p[k1]=i;
            q[k2]=i;
        }
    }
    cout<<"YES"<<'\n';
    for(int i=1; i<=n; i++){
        cout<<p[i]<<" ";
    }
    cout<<'\n';
    for(int i=1; i<=n; i++){
        cout<<q[i]<<" ";
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