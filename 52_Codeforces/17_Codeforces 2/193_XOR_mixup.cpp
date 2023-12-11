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
    vl v(n);
    for(i=0; i<n; i++){
        cin>>v[i];
    }
    ll ans;
    for(i=0; i<n; i++){
        // if(i==0){
        //     ans=v[1];
        // }
        // else{
        //     ans=v[0];
        // }
        ans=0;
        for(ll j=0; j<n; j++){
            if(j==i){
                continue;
            }
            ans^=v[j];
        }
        if(ans==v[i]){
            cout<<v[i]<<endl;
            return;
        }
    }
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