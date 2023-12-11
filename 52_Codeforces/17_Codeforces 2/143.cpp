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

// ll btd(ll n){
//     ll base=1, ans=0;
//     while(n){
//         int last_digit = n%10;
//         n /= 10;
//         ans += last_digit*base;
//         base *= 2;
//     }
//     return ans;
// }

void solve(){
    ll n, i;
    cin>>n;
    ll ans = 1;
    if(n%2==0){
        if(!(n&(n-1))){
            ans = n+1;
        }
        else{
            ans = n&~(n-1);
        }
    }
    else{
        if(n==1){
            ans=3;
        }
    }
    cout<<ans<<endl;

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