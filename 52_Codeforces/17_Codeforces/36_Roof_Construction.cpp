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
        ll a = log2(n-1);
        a = pow(2, a);
        for(i=a-1; i>=0; i--){
            cout<<i<<" ";
        }
        for(i=a; i<n; i++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}