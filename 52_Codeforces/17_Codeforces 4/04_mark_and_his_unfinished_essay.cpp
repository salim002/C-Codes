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
#define mp make_pair
#define pb push_back
const int mod = 1000000007;
#define all(x) x.begin(), x.end()
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

ll fac(ll n){
    ll res=1;
    for(ll i=2; i<=n; i++){
        res*=i;
    }
    return res;
}

ll nCr(ll n, ll r){
    return fac(n)/(fac(r) * fac(n-r));
}

bool isPowerOfTwo(ll n){
    return n && (!(n&(n-1)));
}

void solve(){
    ll n, c, q;
    cin>>n>>c>>q;
    string s;
    cin>>s;
    vl a(c+1), b(c+1), d(c+1);
    a[0]=n;
    b[0]=0;
    for(ll i=1; i<=c; i++){
        ll l, r;
        cin>>l>>r;
        l--;
        r--;
        b[i] = a[i-1];
        a[i] = a[i-1]+(r-l+1);
        d[i] = b[i]-l;
    }
    while(q--){
        ll k;
        cin>>k;
        for(ll i=c; i>=1; i--){
            if(k>b[i]){
                k-=d[i];
            }
        }
        cout<<s[k-1]<<endl;
    }
}

int main(){
    fast_io
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}