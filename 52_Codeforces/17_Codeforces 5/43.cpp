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

// const int mod = 1000000007;
ll mod = 998244353;

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
    string s;
    cin>>s;
    ll cnt=0, n=s.size(), sum=0, r=0;
    vl v;
    for(ll i=0; i<n-1; i++){
        if(s[i]==s[i+1]){
            ll tmp=0, j=i+1;
            while(j<n && s[i]==s[j]){
                tmp++;
                j++;
            }
            cnt+=tmp;
            if(tmp>0){
                v.push_back(tmp+1);
                sum+=tmp+1;
                r+=tmp;
            }
            i=j-1;
        }
    }
    ll val=1;
    for(auto it:v){
        val = mul(val, it);
    }
    val = mul(val, fac(cnt));
    cout<<cnt<<" "<<val<<'\n';
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