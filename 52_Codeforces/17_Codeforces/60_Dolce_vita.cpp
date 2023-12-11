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
    ll n, x, i;
    cin>>n>>x;
    vl v(n);
    for(i=0; i<n; i++){
        cin>>v[i];
    }
    ll ans=0, day=0;
    sort(v.begin(), v.end());
    for(i=1; i<n; i++){
        v[i] += v[i-1];
    }
    for(i=n-1; i>=0; i--){
        v[i] += (i+1)*day;
        if(x-v[i]>=0){
            ll n = (x-v[i]) / (i+1) + 1;
            ans += n*(i+1);
            day += n;
        }
    }
    cout<<ans<<endl;
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