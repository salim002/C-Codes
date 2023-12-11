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
    ll n, i, j;
    cin>>n;
    vector<string> v(n);
    for(i=0; i<n; i++){
        cin>>v[i];
    }
    ll ans=0;
    ll a = n/2+(n%2==1);
    for(i=0; i<a; i++){
        for(j=i; j<n; j++){
            ll k=v[i][j];
            ll cnt=0;
            if(v[j][n-i-1]!=k){
                v[j][n-i-1]=k;
                cnt++;
            }
            if(v[n-i-1][n-j-1]!=k){
                v[n-i-1][n-j-1]=k;
                cnt++;
            }
            if(v[n-j-1][i]!=k){
                v[n-j-1][i]=k;
                cnt++;
            }
            cnt = min(cnt, (4-cnt));
            ans+=cnt;
        }
    }
    cout<<ans<<endl;

    // for(auto it:v){
    //     cout<<it<<endl;
    // }
    // cout<<endl;
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