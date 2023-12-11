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
        ll n, k, i;
        cin>>n>>k;
        vector<pair<ll, ll>> v(n);
        for(i=0; i<n; i++){
            cin>>v[i].fi;
        }
        for(i=0; i<n; i++){
            cin>>v[i].se;
        }
        sort(v.begin(), v.end());
        for(auto it:v){
            if(it.first<=k){
                k += it.second;
            }
            else{
                break;
            }
        }
        cout<<k<<endl;
    }
    return 0;
}