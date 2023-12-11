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
    ll a, b;
    cin>>a>>b;
    ll k = 0;
    if((a-1)%4==0){
        k=a-1;
    }
    else if((a-1)%4==1){
        k=1;
    }
    else if((a-1)%4==2){
        k=a;
    }
    else{
        k=0;
    }
    if(k==b){
        cout<<a<<endl;
    }
    else{
        if((k^b)!=a){
            cout<<a+1<<endl;
        }
        else{
            cout<<a+2<<endl;
        }
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