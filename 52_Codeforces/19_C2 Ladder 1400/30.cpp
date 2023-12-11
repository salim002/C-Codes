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
    string s, t;
    cin>>s>>t;
    if(s==t){
        cout<<"YES"<<'\n';
        return;
    }
    vi v1(27), v2(27);
    for(auto it:s){
        v1[it-'a']++;
    }
    for(auto it:t){
        v2[it-'a']++;
    }
    for(int i=0; i<26; i++){
        if(v1[i]<v2[i] || (v1[i]-v2[i])%k!=0){
            cout<<"NO"<<'\n';
            return;
        }
        v1[i]-=v2[i];
        v1[i+1]+=v1[i];
    }
    cout<<"YES"<<'\n';
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