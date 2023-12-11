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

ll maxSubArray(vl &nums) {
    ll ans=INT_MIN, curr=0;
    for(auto it:nums){
        curr+=it;
        ans=max(ans, curr);
        if(curr<0) curr=0;
    }
    return ans;
}

void solve(){
    ll n;
    cin>>n;
    vl v(n), p;
    for(ll i=0; i<n; i++){
        cin>>v[i];
        p.push_back(abs(v[i])%2);
    }
    vector<vl> a;
    for(int i=0; i<n; i++){
        vl tmp;
        tmp.push_back(v[i]);
        int j=i+1, prev=p[i], last=i;
        while(j<n && p[j]!=prev){
            tmp.push_back(v[j]);
            last=j;
            j++;
            prev ^= 1;
        }
        a.push_back(tmp);
        i=last;
    }
    // for(auto it:p) cout<<it<<" ";
    // cout<<'\n';
    // for(auto it:a){
    //     for(auto i:it) cout<<i<<" ";
    //     cout<<'\n';
    // }
    ll ans= -1e9+2;
    for(auto it:a){
        ans=max(ans, maxSubArray(it));
    }
    cout<<ans<<'\n';
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