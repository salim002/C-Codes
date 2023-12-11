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
    int n, k;
    cin>>n>>k;
    vector<pair<int, int>> a, b, c, d, ee, ff;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        a.push_back({x, i});
    }
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        b.push_back({x, i});
    }
    sort(all(a));
    reverse(all(a));
    sort(all(b));
    vi ans(n);
    int cnt=0;
    for(int i=0; i<n; i++){
        if(cnt<k){
            ee.push_back(a[i]);
            ff.push_back(b[i]);
            cnt++;
        }
        else{
            c.push_back(a[i]);
            d.push_back(b[i]);
        }
    }
    reverse(all(ff));
    for(int i=0; i<ee.size(); i++){
        if(ee[i].first<=ff[i].first){
            cout<<"NO"<<'\n';
            return;
        }
        ans[ee[i].second]=ff[i].first;
    }
    reverse(all(d));
    for(int i=0; i<c.size(); i++){
        if(c[i].first>d[i].first){
            cout<<"NO"<<'\n';
            return;
        }
        ans[c[i].second]=d[i].first;
    }
    cout<<"YES"<<'\n';
    for(auto it:ans) cout<<it<<" ";
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