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
    ll n, m, rb, cb, rd, cd;
    cin>>n>>m>>rb>>cb>>rd>>cd;
    ll ans = 0;
    bool r_reflect = false;
    bool c_reflect = false;
    while(true){
        if(rb==rd || cb==cd){
            break;
        }
        else{
            ans++;
        }
        if(rb==n){
            r_reflect = true;
        }
        if(cb==m){
            c_reflect = true;
        }
        if(r_reflect && c_reflect){
            rb--;
            cb--;
        }
        else if(r_reflect){
            rb--;
            cb++;
        }
        else if(c_reflect){
            rb++;
            cb--;
        }
        else{
            rb++;
            cb++;
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