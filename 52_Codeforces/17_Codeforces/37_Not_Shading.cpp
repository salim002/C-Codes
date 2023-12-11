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
    ll n, m, r, c;
    cin>>n>>m>>r>>c;
    char arr[n+1][m+1];
    bool black_exists = false;
    for(ll i=1; i<=n; i++){
        for(ll j=1; j<=m; j++){
            cin>>arr[i][j];
            if(arr[i][j] == 'B'){
                black_exists = true;
            }
        }
    }
    if(!black_exists){
        cout<<-1<<endl;
    }
    else if(arr[r][c]=='B'){
        cout<<0<<endl;
    }
    else{
        black_exists = false;
        for(int i=1; i<=n; i++){
            if(arr[i][c] == 'B'){
                black_exists = true;
            }
        }
        for(int j=1; j<=m; j++){
            if(arr[r][j] == 'B'){
                black_exists = true;
            }
        }
        if(black_exists){
            cout<<1<<endl;
        }
        else{
            cout<<2<<endl;
        }
    }

}

int main(){
    ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}