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
    ll n, l, i, j;
    cin>>n>>l;
    vl v(n+3);
    for(i=0; i<n; i++){
        cin>>v[i];
    }
    ll ans=0;
    for(i=0; i<l; i++){
        ll a = 0;
        for(j=0; j<n; j++){
            if(v[j] & (1<<i)){
                a++;
            }
        }
        if(a>(n-a)){
            ans += (1<<i);
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