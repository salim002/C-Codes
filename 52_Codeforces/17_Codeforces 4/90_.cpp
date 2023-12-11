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

int fun(map<char, int> &mp1, map<char, int> &mp2){
    int a=0, b=0;
    for(auto it:mp1){
        if(it.second>0){
            a++;
        }
    }
    for(auto it:mp2){
        if(it.second>0){
            b++;
        }
    }
    int res=a+b;
    return res;
}

void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    map<char, int> mp1, mp2;
    mp1[s[0]]++;
    for(int i=1; i<n; i++){
        mp2[s[i]]++;
    }
    int ans=fun(mp1, mp2);
    for(int i=1; i<n-1; i++){
        mp1[s[i]]++;
        mp2[s[i]]--;
        ans = max(ans, fun(mp1, mp2));
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