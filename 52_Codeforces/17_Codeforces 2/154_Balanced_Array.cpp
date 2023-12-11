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
    ll n, i;
    cin>>n;
    if((n/2)%2!=0){
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;
    ll j=2;
    for(i=1; i<=n/2; i++){
        cout<<j<<" ";
        j+=2;
    }
    ll x = j-2;
    j=1; 
    for(i=1; i<n/2; i++){
        cout<<j<<" ";
        j+=2;
    }
    cout<<x+n/2-1<<endl;
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