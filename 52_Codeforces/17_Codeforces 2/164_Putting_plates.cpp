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
    ll n, m, i, j;
    cin>>n>>m;
    vector<vector<ll>> v(n+1, vector<ll>(m+1, 0));
    for(j=1; j<=m; j++){
        if(j%2==0){
            continue;
        }
        v[1][j]=1;
    }
    for(j=1; j<=m; j++){
        if(j%2==0){
            continue;
        }
        v[n][j]=1;
    }
    for(i=3; i<n-1; i++){
        if(v[i-1][1]==0 && v[i+1][1]==0){
            v[i][1]=1;
        }
        if(v[i-1][m]==0 && v[i+1][m]==0){
            v[i][m]=1;
        }
    }

    for(i=1; i<=n; i++){
        for(j=1; j<=m; j++){
            cout<<v[i][j];
        }
        cout<<endl;
    }
    cout<<endl;
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