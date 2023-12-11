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
    ll n,m, i;
    cin>>n>>m;
    vl v(n);
    ll sum=0;
    for(i=0; i<n; i++){
        cin>>v[i];
        sum+=v[i];
    }
    if(m>=sum){
        cout<<0<<endl;
        return;
    }
    cout<<sum-m<<endl;
    
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