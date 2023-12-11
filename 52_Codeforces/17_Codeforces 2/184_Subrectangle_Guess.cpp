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
    vector<vector<int>> v(n, vector<int>(m));
    ll mx=INT_MIN, a=0, b=0;
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            cin>>v[i][j];
            if(v[i][j]>mx){
                mx = v[i][j];
                a=i+1;
                b=j+1;
            }
        }
    }
    a = max(a, n-a+1);
    b = max(b, m-b+1);
    cout<<a*b<<endl;

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