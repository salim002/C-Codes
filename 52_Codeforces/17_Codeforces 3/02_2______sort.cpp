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
    ll n, k, i, j;
    cin>>n>>k;
    vl v(n);
    for(i=0; i<n; i++){
        cin>>v[i];
    }
    vl p(n);
    for(i=0; i<n-1; i++){
        p[i] = (v[i]<2*v[i+1]);
    }
    // for(auto it:p){
    //     cout<<it<<" ";
    // }
    // cout<<endl;
    ll tmp=0;
    for(i=0; i<k; i++){
        tmp+=p[i];
    }
    ll ans=0;
    if(tmp==k){
        ans++;
    }
    for(i=k; i<n-1; i++){
        tmp+=p[i];
        tmp-=p[i-k];
        if(tmp==k){
            ans++;
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