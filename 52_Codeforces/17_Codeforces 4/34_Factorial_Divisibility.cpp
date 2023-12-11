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

const int N = 5e5+5;

void solve(){
    ll n, x;
    cin>>n>>x;
    vl v(N);
    for(ll i=0; i<n; i++){
        ll a;
        cin>>a;
        v[a]++;
    }
    for(ll i=1; i<x; i++){
        if(v[i]%(i+1)==0){
            v[i+1] += (v[i]/(i+1));
            v[i]=0;
        }
    }
    for(ll i=1; i<x; i++){
        if(v[i]!=0){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
}

int main(){
    fast_io
    // ll t;
    // cin>>t;
    // while(t--){
    // }
    solve();
    return 0;
}