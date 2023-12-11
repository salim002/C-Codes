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
    ll x, y, z;
    cin>>x>>y>>z;
    vl v;
    v.push_back(x);
    v.push_back(y);
    v.push_back(z);
    sort(all(v));
    if(v[1]!=v[2]){
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;
    cout<<v[0]<<" "<<v[1]<<" "<<v[0]<<endl;
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