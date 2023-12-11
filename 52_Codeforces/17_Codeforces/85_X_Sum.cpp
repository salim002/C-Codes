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

ll arr[200][200];

ll sum(ll n, ll m, ll a, ll b){
    ll temp = 0, idx=0;
    while((a+idx)<n && (b+idx)<m){
        temp += arr[a+idx][b+idx];
        idx++;
    }
    idx = 1;
    while((a-idx)>=0 && (b-idx)>=0){
        temp += arr[a-idx][b-idx];
        idx++;
    }
    idx = 1;
    while((a-idx)>=0 && (b+idx)<m){
        temp += arr[a-idx][b+idx];
        idx++;
    }
    idx = 1;
    while((a+idx)<n && (b-idx)>=0){
        temp += arr[a+idx][b-idx];
        idx++;
    }
    return temp;
}

void solve(){
    ll n, m;
    cin>>n>>m;
    for(ll i=0; i<n; i++){
        for(ll j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }
    ll temp = 0, ans = INT_MIN;
    for(ll i=0; i<n; i++){
        for(ll j=0; j<m; j++){
            ans = max(ans, sum(n, m, i, j));
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