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
    ll a, b, p, ans=INT_MAX;
    for(i=1; i<=sqrt(n); i++){
        if(n%i==0){
            a=i;
            b=n/i;
        }
        p = 2*(a+b);
        ans = min(ans, p);
    }
    cout<<ans<<endl;
}

int main(){
    fast_io
    solve();
    // ll t;
    // cin>>t;
    // while(t--){
    // }
    return 0;
}