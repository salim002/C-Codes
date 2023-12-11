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
    ll n, h, i;
    cin>>n>>h;
    vl v(n);
    for(i=0; i<n; i++){
        cin>>v[i];
    }
    ll l=1, r=1e18;
    while(l<=r){
        ll m = (l+r)/2;
        ll sm=m;
        for(i=0; i<n-1; i++){
            sm+=min(m, v[i+1]-v[i]);
        }
        if(sm<h){
            l=m+1;
        }
        else{
            r=m-1;
        }
    }
    cout<<r+1<<endl;
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