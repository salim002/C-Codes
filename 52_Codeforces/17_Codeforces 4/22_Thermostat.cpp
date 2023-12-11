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
    ll l, r, x, a, b;
    cin>>l>>r>>x>>a>>b;
    if(a==b){
        cout<<0<<endl;
        return;
    }
    if(a+x>r && a-x<l){
        cout<<-1<<endl;
        return;
    }
    if(abs(a-b)>=x){
        cout<<1<<endl;
    }
    else if((r-max(a, b)>=x) || (min(a, b)-l>=x)){
        cout<<2<<endl;
    }
    else if((r-a>=x && b-l>=x) || (a-l>=x && r-b>=x)){
        cout<<3<<endl;
    }
    else{
        cout<<-1<<endl;
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