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
    ll n, c, q, l, r, k, i;
    cin>>n>>c>>q;
    string s;
    cin>>s;
    while(c--){
        cin>>l>>r;
        string t=s.substr(l-1, r-l+1);
        s+=t;
    }
    string ans="";
    while(q--){
        cin>>k;
        ans+=s[k-1];
    }
    for(auto it:ans){
        cout<<it<<endl;
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