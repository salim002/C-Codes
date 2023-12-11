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
    vl v(4);
    map<ll, ll> m;
    for(ll i=0; i<4; i++){
        cin>>v[i];
        m[v[i]]++;
    }
    if(m[0]==0){
        cout<<2<<endl;
    }
    else if(m[1]==0){
        cout<<0<<endl;
    }
    else{
        cout<<1<<endl;
    }
    
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