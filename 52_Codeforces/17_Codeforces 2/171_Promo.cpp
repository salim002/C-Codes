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
    ll n, q, i;
    cin>>n>>q;
    vl v(n+1);
    for(i=1; i<=n; i++){
        cin>>v[i];
    }
    sort(v.rbegin(), v.rend()-1);
    for(i=2; i<=n; i++){
        v[i]+=v[i-1];
    }
    while(q--){
        ll x, y;
        cin>>x>>y;
        cout<<v[x]-v[x-y]<<endl;
    }
}

int main(){
    fast_io
    solve();
    return 0;
}