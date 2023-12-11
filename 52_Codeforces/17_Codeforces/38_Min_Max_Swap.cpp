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
        ll a[n], b[n];
        for(i=0; i<n; i++){
            cin>>a[i];
        }
        for(i=0; i<n; i++){
            cin>>b[i];
        }
        for(i=0; i<n; i++){
            if(a[i]<b[i]){
                swap(a[i], b[i]);
            }
        }
        ll ans = (*max_element(a, a+n)) * (*max_element(b, b+n));
        cout<<ans<<endl;
    }
    return 0;
}