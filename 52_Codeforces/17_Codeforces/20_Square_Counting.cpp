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

ll ans(ll n, ll s){
    if(s==0){
        return 0;
    }
    ll count = s / (n*n);
    return count;
}

int main(){
    ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        ll n, s;
        cin>>n>>s;
        cout<<ans(n, s)<<endl;
    }
    return 0;
}