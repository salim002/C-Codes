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
    ll n;
    char c;
    cin>>n>>c;
    string s;
    cin>>s;
    bool ok=true;
    for(auto it:s){
        if(it!=c){
            ok=false;
            break;
        }
    }
    if(ok){
        cout<<0<<endl;
        return;
    }
    bool f;
    ll idx;
    for(ll i=1; i<=n; i++){
        f=true;
        for(ll j=i; j<=n; j+=i){
            if(s[j-1]!=c){
                f=false;
                break;
            }
        }
        if(f){
            cout<<1<<endl;
            cout<<i<<endl;
            return;
        }
    }
    cout<<2<<endl;
    cout<<n-1<<" "<<n<<endl;
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