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
    cin>>n;
    vl v(n);
    for(ll i=0; i<n; i++){
        cin>>v[i];
    }
    if(n==1){
        if(v[0]==1){
            cout<<2<<" "<<1<<endl;
        }
        else{
            cout<<1<<" "<<2<<endl;
        }
        return;
    }
    if(v[0]==1){
        cout<<n+1<<" ";
        for(ll i=1; i<=n; i++){
            cout<<i<<" ";
        }
        cout<<endl;
        return;
    }
    bool ok=false;
    ll ptr=0;
    for(ll i=0; i<n-1; i++){
        if(v[i]==0 && v[i+1]==1){
            ptr=i+1;
            ok=true;
            break;
        }
    }
    if(!ok){
        for(ll i=1; i<=n+1; i++){
            cout<<i<<" ";
        }
        cout<<endl;
        return;
    }
    for(ll i=1; i<=ptr; i++){
        cout<<i<<" ";
    }
    cout<<n+1<<" ";
    for(ll i=ptr+1; i<=n; i++){
        cout<<i<<" ";
    }
    cout<<endl;
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