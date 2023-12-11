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
    ll n, m, i;
    cin>>n>>m;
    vl v(n), p(n, 0), r(n, 0);

    for(i=0; i<n; i++){
        cin>>v[i];
    }
    for(i=0; i<n-1; i++){
        p[i+1] = max(ll(0), v[i]-v[i+1]);
        r[i] = max(ll(0), v[i+1]-v[i]);
    }
    for(i=1; i<n; i++){
        p[i]+=p[i-1];
    }
    for(i=n-2; i>=0; i--){
        r[i]+=r[i+1];
    }
    // reverse(all(r));
    while(m--){
        ll a, b, ans=0;
        cin>>a>>b;
        if(a<=b){
            cout<<p[b-1]-p[a-1]<<endl;
        }
        else{
            cout<<r[b-1]-r[a-1]<<endl;
        }
    }
    // for(auto it:p){
    //     cout<<it<<" ";
    // }
    // cout<<endl;
    // for(auto it:r){
    //     cout<<it<<" ";
    // }
    // cout<<endl;
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