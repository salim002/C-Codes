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
    ll n, k, i, j;
    cin>>n>>k;
    ll x = (n+1)/2;
    if(x<k){
        cout<<-1<<endl;
        return;
    }
    vector<vector<char>> v(n, vector<char>(n, '.'));
    for(i=0; i<n; i++){
        if(k==0){
            break;
        }
        if(i%2==0){
            v[i][i] = 'R';
            k--;
        }
    }
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
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