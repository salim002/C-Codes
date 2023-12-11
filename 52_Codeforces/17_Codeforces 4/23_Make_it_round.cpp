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
    ll n, m;
    cin>>n>>m;
    ll a=0, b=0;
    ll tmp = n, k=1;
    while(tmp>0 && tmp%2==0){
        a++;
        tmp/=2;
    }
    while(tmp>0 && tmp%5==0){
        b++;
        tmp/=5;
    }
    while(a<b && k*2<=m){
        a++;
        k*=2;
    }
    while(b<a && k*5<=m){
        b++;
        k*=5;
    }
    while(k*10<=m){
        k*=10;
    }
    if(k==1){
        cout<<n*m<<endl;
    }
    else{
        k *= (m/k);
        cout<<n*k<<endl;
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