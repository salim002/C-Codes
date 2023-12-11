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
    int n, m; 
    cin>>n>>m;
    vi v(n), p(n);
    vector<pair<int, int>> vp;
    int ans=0;
    for(int i=0; i<n; i++){
        cin>>v[i];
        p[i]=i+1;
        vp.push_back({v[i], i});
    }
    if(m<*min_element(all(v))){
        cout<<n+1<<'\n';
        return;
    }
    if(m==0){
        int cntt=0;
        for(int i=0; i<n; i++){
            if(v[i]==0){
                cntt++;
                p[i]--;
            }
        }
        int tmp=0;
        for(int i=0; i<n; i++){
            if(p[i]>cntt){
                tmp++;
            }
        }
        cout<<tmp+1<<'\n';
        return;
    }
    sort(all(vp));
    // for(auto it:vp){
    //     cout<<it.first<<" ";
    // }
    // cout<<'\n';
    // cout<<idx<<'\n';
    int cnt=0, rem=0;
    for(int i=0; i<n; i++){
        if(vp[i].first<=m){
            m-=vp[i].first;
            rem=vp[i].first;
            cnt++;
            p[vp[i].second]--;
        }
    }
    if(cnt==n){
        cout<<1<<'\n';
        return;
    }
    int tmp=0;
    for(int i=0; i<n; i++){
        if(p[i]>cnt){
            tmp++;
        }
    }
    if(p[cnt]==cnt+1){
        if(rem+m>=v[cnt]){
            tmp--;
        }
    }
    cout<<tmp+1<<'\n';
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