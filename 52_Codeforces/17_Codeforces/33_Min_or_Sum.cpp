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

int main(){
    ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        ll n, i; 
        cin>>n;
        vl v(n);
        for(i=0; i<n; i++){
            cin>>v[i];
        }
        vector<bool> chk(31);
        for(i=0; i<n; i++){
            for(ll j=0; j<31; j++){
                if(v[i] & (1<<j)){
                    chk[j] = true;
                }
            }
        }
        ll ans = 0;
        for(i=0; i<31; i++){
            if(chk[i]){
                ans += (1<<i);
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}