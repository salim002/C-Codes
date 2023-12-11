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
    vector<string> v(n);
    for(ll i=0; i<n; i++){
        cin>>v[i];
    }
    // bool ok=false;
    // for(ll i=0; i<n; i++){
    //     if(find(v[i].begin(), v[i].end(), '1')!=v[i].end()){
    //         ok=true;
    //         break;
    //     }
    // }
    // if(!ok){
    //     cout<<"NO"<<endl;
    //     return;
    // }
    for(ll i=0; i<n-1; i++){
        for(ll j=0; j<m-1; j++){
            ll cnt=0;
            if(v[i][j]=='1'){
                cnt++;
            }
            if(v[i][j+1]=='1'){
                cnt++;
            }
            if(v[i+1][j]=='1'){
                cnt++;
            }
            if(v[i+1][j+1]=='1'){
                cnt++;
            }
            if(cnt==3){
                cout<<"NO"<<endl;
                return;
            }
        }
    }
    cout<<"YES"<<endl;
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