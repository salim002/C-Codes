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
    ll n, k, i;
    cin>>n>>k;
    vl v(n);
    for(i=0; i<n; i++){
        cin>>v[i];
    }
    // if(n==k){
    //     cout<<0<<endl;
    //     return;
    // }
    vl idx(n, 0);
    for(i=0; i<n; i++){
        idx[i] = i;
    }
    sort(idx.begin(), idx.end(), [&](ll i, ll j){return (v[i]+i>v[j]+j);});
    // for(auto it:v){
    //     cout<<it<<" ";
    // }
    // cout<<endl;
    // for(auto it: idx){
    //     cout<<it<<" ";
    // }
    // cout<<endl<<endl;
    map<ll, bool> m;
    for(i=0; i<k; i++){
        m[idx[i]] = true;
    }
    ll ans = 0, extra = 0;
    for(i=0; i<n; i++){
        if(m[i]==true){
            extra++;
        }
        else{
            ans += (v[i]+extra);
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