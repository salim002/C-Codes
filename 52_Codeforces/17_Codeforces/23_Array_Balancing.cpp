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
        ll arr1[n], arr2[n];
        for(i=0; i<n; i++){
            cin>>arr1[i];
        }
        for(i=0; i<n; i++){
            cin>>arr2[i];
        }
        ll ans=0;
        for(i=0; i<n-1; i++){
            ans += min(abs(arr1[i]-arr1[i+1])+abs(arr2[i]-arr2[i+1]), abs(arr1[i]-arr2[i+1])+abs(arr2[i]-arr1[i+1]));
        }
        cout<<ans<<endl;
    }
    return 0;
}