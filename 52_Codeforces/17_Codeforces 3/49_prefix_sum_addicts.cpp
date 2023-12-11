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
// const int mod = 998244353;
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

void solve(){
    ll n, k, i;
    cin>>n>>k;
    vl v(k);
    for(i=0; i<k; i++){
        cin>>v[i];
    }
    if(k==1){
        cout<<"YES"<<endl;
        return;
    }
    vl a(k-1, 0);
    for(i=0; i<k-1; i++){
        a[i]=v[i+1]-v[i];
    }
    if(is_sorted(all(a)) && v[0]<=(n-k+1)*a[0]){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
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