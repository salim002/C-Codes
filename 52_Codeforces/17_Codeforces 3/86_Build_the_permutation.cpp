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
    ll n, a, b;
    cin>>n>>a>>b;
    if(a+b>n-2){
        cout<<-1<<endl;
        return;
    }
    if(abs(a-b)>=2){
        cout<<-1<<endl;
        return;
    }
    if(a==0 && b==0){
        for(ll i=1; i<=n; i++){
            cout<<i<<" ";
        }
        cout<<endl;
        return;
    }
    if(a>b){
        ll x=a+b+1;
        for(ll i=1; i<=n-x; i++){
            cout<<i<<" ";
        }
        for(ll i=n-x+1; i<=n; i+=2){
            cout<<i+1<<" "<<i<<" ";
        }
        cout<<endl;
    }
    else if(b>a){
        ll x=a+b+1;
        for(ll i=1; i<=x; i+=2){
            cout<<i+1<<" "<<i<<" ";
        }
        for(ll i=x+1; i<=n; i++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    else{
        ll x=a+b;
        for(ll i=1; i<=x; i+=2){
            cout<<i+1<<" "<<i<<" ";
        }
        for(ll i=x+1; i<=n-2; i++){
            cout<<i<<" ";
        }
        cout<<n<<" "<<n-1<<endl;
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