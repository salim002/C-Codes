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
    ll n, m, i;
    cin>>n>>m;
    vector<string> v(n);
    for(ll i=0; i<n; i++){
        cin>>v[i];
    }
    if(n==1){
        cout<<"YES"<<endl;
        return;
    }
    ll r, c;
    bool flag = false;
    for(i=0; i<n; i++){
        for(ll j=0; j<m; j++){
            if(v[i][j]=='R'){
                r=i;
                c=j;
                flag = true;
                break;
            }
        }
        if(flag){
            break;
        }
    }
    while(c--){
        for(i=0; i<n; i++){
            if(v[i][c]=='R'){
                cout<<"NO"<<endl;
                return;
            }
        }
    }
    while(r--){
        for(i=0; i<m; i++){
            if(v[r][i]=='R'){
                cout<<"NO"<<endl;
                return;
            }
        }
    }
    cout<<"YES"<<endl;
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