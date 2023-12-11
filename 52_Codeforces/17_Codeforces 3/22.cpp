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
    vl v(n+2);
    for(i=1;i<=n;i++){
        cin>>v[i];
    }
    if(n%2==1){
        ll ans=0;
        for(i=2; i<=n; i+=2){
            ans += max(0ll, max(v[i-1], v[i+1])-(v[i]-1));
        }
        cout<<ans<<endl;
        return;
    }
    vl a(n+2), b(n+2);
    a[0]=0;
    for(i=2;i<=n;i+=2){
        a[i] = a[i-2] + max(0ll, max(v[i-1], v[i+1])-(v[i]-1));
    }
    b[n+1]=0;
    for(i=n-1; i>=1; i-=2){
        b[i] = b[i+2] + max(0ll, max(v[i-1], v[i+1])-(v[i]-1));
    }
    ll ans=1e18;
    for(i=1; i<=n; i+=2){
        ll x=a[i-1]+b[i+2];
        ans=min(ans, x);
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