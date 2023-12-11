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
    ll a, b, c;
    cin>>a>>b>>c;
    ll z=0;
    cout<<max(z, max(b, c)-a+1)<<" "<<max(z, max(a, c)-b+1)<<" "<<max(z, max(a, b)-c+1)<<endl;

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