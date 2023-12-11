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
    // vl v(n);
    // for(i=0; i<n; i++){
    //     cin>>v[i];
    // }
    unordered_map<ll, ll> m, pos;
    ll ans = -1, mn = INT_MAX;
    for(i=0; i<n; i++){
        ll a;
        cin>>a;
        pos[a]=i+1;
        m[a]++;
    }
    for(auto it:m){
        if(it.second==1 && mn>it.first){
            mn=it.first;
            ans=pos[it.first];
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