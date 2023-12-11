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
    vector<string> v(8);
    for(ll i=0; i<8; i++){
        cin>>v[i];
    }
    ll r=0;
    for(ll i=0; i<8; i++){
        if(v[i][0]=='R' && v[i] == "RRRRRRRR"){
            cout<<v[i][0];
            r++;
            break;
        }
    }
    if(r>0){
        cout<<endl;
        return;
    }
    cout<<"B"<< endl;
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