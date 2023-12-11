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
 
void solve(){
    ll n, m, i;
    cin>>n>>m;
    vector<string> v(n);
    for(i=0; i<n; i++){
        cin>>v[i];
    }
    ll mov = 0, ans = INT_MAX;
    for(i=0; i<n; i++){
        for(ll j=i+1; j<n; j++){
            for(ll k=0; k<m; k++){
                mov += abs(v[i][k]-v[j][k]);
            }
            if(mov<ans){
                ans = mov;
            }
            mov = 0;
        }
    }
    cout<<ans<<endl;
    
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}