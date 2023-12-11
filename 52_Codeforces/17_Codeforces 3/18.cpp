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

void solve(){
    ll n, i;
    cin>>n;
    vl v(n);
    bool ok=false;
    ll z=0, sm=0;
    for(i=0; i<n; i++){
        cin>>v[i];
        if(i!=n-1 && v[i]!=0){
            ok=true;
        }
        if(v[i]==0 && i!=n-1 && ok){
            z++;
        }
        if(i!=n-1){
            sm+=v[i];
        }
    }
    cout<<sm+z<<endl;
    
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