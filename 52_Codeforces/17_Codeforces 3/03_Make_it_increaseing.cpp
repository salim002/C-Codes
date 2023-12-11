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
    ll n, i, j;
    cin>>n;
    vl v(n);
    for(i=0; i<n; i++){
        cin>>v[i];
    }
    vl p = v;
    ll ans=1e18;
    for(i=0; i<n; i++){
        ll cnt=0;
        v[i]=0;
        for(j=i-1; j>=0; j--){
            ll r = abs(v[j+1]/v[j]) + 1;
            v[j] = -1 * v[j]*r;
            cnt += r;
        }
        for(j=i+1; j<n; j++){
            ll r = v[j-1]/v[j] + 1;
            v[j] = v[j]*r;
            cnt+=r;
        }
        ans = min(ans, cnt);
        v = p;
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