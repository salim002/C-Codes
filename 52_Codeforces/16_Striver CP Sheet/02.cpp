//Binary Search

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

ll price(ll a, ll b, ll c, ll n1, ll n2, ll n3, ll p1, ll p2, ll p3, ll x){
    ll res = max(ll(0), a*x-n1)*p1 + max(ll(0), b*x-n2)*p2 + max(ll(0), c*x-n3)*p3;
    return res;
}

void solve(){
    string s;
    cin>>s;
    ll n1, n2, n3, p1, p2, p3;
    ll k;
    cin>>n1>>n2>>n3;
    cin>>p1>>p2>>p3;
    cin>>k;
    ll a=count(all(s), 'B');
    ll b=count(all(s), 'S');
    ll c=count(all(s), 'C');
    ll l=0, r=1e13;
    while(l<=r){
        ll mid = l+(r-l)/2;
        ll tmp = price(a, b, c, n1, n2, n3, p1, p2, p3, mid);
        if(tmp<=k){
            l=mid+1;
        }
        else{
            r=mid-1;
        }
    }
    cout<<r<<'\n';
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