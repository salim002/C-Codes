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

ll fac(ll n){
    ll res=1;
    for(ll i=2; i<=n; i++){
        res*=i;
    }
    return res;
}

ll nCr(ll n, ll r){
    return fac(n)/(fac(r) * fac(n-r));
}

void solve(){
    ll n, i;
    cin>>n;
    string s;
    vl v(n);
    map<ll, vector<ll>> mp;
    for(i=0; i<n; i++){
        cin>>v[i];
        mp[v[i]].push_back(i);
    }
    cin>>s;
    bool ok=true;
    for(auto it:mp){
        char temp = s[it.second[0]];
        for(i=1; i<it.second.size(); i++){
            if(s[it.second[i]]!=temp){
                ok=false;
                break;
            }
        }
        if(!ok){
            break;
        }
    }
    if(ok){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
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