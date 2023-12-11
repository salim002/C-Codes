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
    map<string, bool> m;
    for(i=0; i<n; i++){
        cin>>v[i];
        m[v[i]] = true;
    }
    for(i=0; i<n; i++){
        int ok=0;
        for(j=0; j<v[i].size(); j++){
            string p=v[i].substr(0, j), s=v[i].substr(j, v[i].size());
            if(m[p] && m[s]){
                ok=1;
                break;
            }
        }
        cout<<ok;
    }
    cout<<endl;
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