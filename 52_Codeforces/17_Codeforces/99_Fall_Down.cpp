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
    ll n, m, i, j;
    cin>>n>>m;
    char v[n][m];
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            cin>>v[i][j];
        }
    }
    for(i=n-1; i>0; i--){
        for(j=0; j<m; j++){
            if(v[i][j]=='.'){
                ll a=i-1;
                while(v[a][j] == '.' && a>=0){
                    a--;
                }
                if(a<0){
                    a=0;
                }
                if(v[a][j]=='*'){
                    swap(v[i][j], v[a][j]);
                }
            }
            // cout<<v[i][j];
        }
    }
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            cout<<v[i][j];
        }
        cout<<endl;
    }
    cout<<endl;
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