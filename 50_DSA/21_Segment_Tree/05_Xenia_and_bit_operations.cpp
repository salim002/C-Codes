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

class segmentTree{
    public:
    vector<int> a;
    vector<pair<int, int>> seg;
    int n;
    segmentTree(vector<int> v){
        a=v;
        n=v.size();
        seg.resize(4*n+1);
        build(0, 0, n-1);
    }
    void build(int idx, int low, int high){
        if(low==high){
            seg[idx].first=a[low];
            seg[idx].second=1;
            return;
        }
        int mid=(low+high)/2;
        build(2*idx+1, low, mid);
        build(2*idx+2, mid+1, high);
        seg[idx].second=seg[2*idx+1].second+1;
        if(seg[idx].second%2==0){
            seg[idx].first=(seg[2*idx+1].first | (seg[2*idx+2].first));
        }
        else{
            seg[idx].first=(seg[2*idx+1].first ^ seg[2*idx+2].first);
        }
    }

    void pointUpdate(int idx, int low, int high, int node, int val){ 
        if(low==high){
            seg[idx].first=val;
        }
        else{
            int mid=(low+high)/2;
            if(node>=low && node<=mid){
                pointUpdate(2*idx+1, low, mid, node, val);
            }
            else{
                pointUpdate(2*idx+2, mid+1, high, node, val);
            }
            if(seg[idx].second%2==0){
                seg[idx].first=(seg[2*idx+1].first | seg[2*idx+2].first);
            }
            else{
                seg[idx].first=(seg[2*idx+1].first ^ seg[2*idx+2].first);
            }
        }
    }
    void update(int node, int val){
        pointUpdate(0, 0, n, node, val);
    }
};

void solve(){
    int n, m;
    cin>>n>>m;
    vi v((1<<n));
    for(int i=0; i<(1<<n); i++){
        cin>>v[i];
    }
    segmentTree sgt(v);
    while(m--){
        int p, b;
        cin>>p>>b;
        sgt.update(p, b);
        cout<<sgt.seg[0].first<<'\n';
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