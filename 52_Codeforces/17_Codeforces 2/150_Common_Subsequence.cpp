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
    ll m, n, i;
    cin>>n>>m;
    vl v1(1005, 0), v2(m);
    ll a;
    for(i=0; i<n; i++){
        cin>>a;
        v1[a]=1;
    }
    for(i=0; i<m; i++){
        cin>>v2[i];
    }
    for(i=0; i<m; i++){
        a = v2[i];
        if(v1[a]>0){
            cout<<"YES"<<endl;
            cout<<1<<" "<<a<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
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