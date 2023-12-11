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
    ll r, c, i, j;
    vector<string> v(8);
    for(i=0; i<8; i++){
        cin>>v[i];
    }
    bool f=false;
    for(i=1; i<7; i++){
        for(j=1; j<7; j++){
            if(v[i-1][j-1]=='#' && v[i-1][j+1]=='#' && v[i+1][j-1]=='#' && v[i+1][j+1]=='#'){
                r=i+1;
                c=j+1;
                f=true;
                break;
            }
        }
        if(f){
            break;
        }
    }
    cout<<r<<" "<<c<<endl;
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