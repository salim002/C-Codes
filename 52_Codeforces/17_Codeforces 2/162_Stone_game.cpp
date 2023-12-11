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
    ll mn, mx;
    for(i=0; i<n; i++){
        cin>>v[i];
        if(v[i]==1){
            mn=i+1;
        }
        if(v[i]==n){
            mx=i+1;
        }
    }
    cout<<min({max(mn, mx), max(n-mn+1, n-mx+1), mn+n-mx+1, mx+n-mn+1})<<endl;
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