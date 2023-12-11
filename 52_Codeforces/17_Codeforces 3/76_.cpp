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
#define all(x) x.begin(), x.end()
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

ll fac(ll n){
    ll res=1;
    for(ll i=2; i<=n; i++){
        res*=i;
    }
    return res;
}

ll nCr(ll n, ll r){
    return fac(n)/(fac(r) * fac(n-r));
}

bool isPowerOfTwo(ll n){
    return n && (!(n&(n-1)));
}

void fill(vector<vector<ll>> &a, ll x, ll y, ll n){
    for(ll i=1; i<=n; i++){
        a[x][i]++;
        a[i][y]++;
    }
    a[x][y]--;
}

void solve(){
    ll n, m, i;
    cin>>n>>m;
    vector<pair<ll, ll>> v;
    vector<vector<ll>> a(n+5, vector<ll>(n+5, 0));
    for(i=0; i<m; i++){
        ll x, y;
        cin>>x>>y;
        v.push_back({x, y});
        fill(a, x, y, n);
    }
    for(auto it:v){
        ll i=it.first;
        ll j=it.second;
        if(a[i-1][j]==1 || a[i][j-1]==1 || a[i][j+1]==1 || a[i+1][j]==1){
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
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