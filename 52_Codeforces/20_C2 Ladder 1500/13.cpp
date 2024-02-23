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

int binary_to_decimal(string s){
    int val=0, r=1;
    for(int i=s.size()-1; i>=0; i--){
        int tmp=(s[i]-'0');
        val+=(tmp*r);
        r*=2;
    }
    return val;
}

void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    if(s.find('0')==string::npos){
        cout<<1<<" "<<n-1<<" "<<2<<" "<<n<<endl;
    }
    else{
        int idx = s.find('0');
        if(idx<(n+1)/2){
            cout<<idx+1<<" "<<n<<" "<<idx+2<<" "<<n<<endl;
        }
        else{
            cout<<1<<" "<<idx+1<<" "<<1<<" "<<idx<<endl;
        }
    }
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