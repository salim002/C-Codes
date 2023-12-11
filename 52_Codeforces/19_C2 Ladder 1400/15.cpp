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
    vi v(n);
    map<int, int> mp, mp1;
    for(int i=0; i<n; i++){
        cin>>v[i];
        mp[v[i]]++;
    }
    vi ans;
    set<int> st;
    int mex=0;
    for(int i=0; i<n; i++){
        mp[v[i]]--;
        mp1[v[i]]++;
        while(mp1[mex]>0){
            mex++;
        }
        if(mp[mex]==0){
            ans.push_back(mex);
            mp1.clear();
            mex=0;
        }
    }
    cout<<ans.size()<<'\n';
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