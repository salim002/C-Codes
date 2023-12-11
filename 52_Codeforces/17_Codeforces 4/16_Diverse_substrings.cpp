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

bool isPowerOfTwo(ll n){
    return n && (!(n&(n-1)));
}

// bool isDiverse(string s){
//     map<char, ll> mp;
//     for(auto it:s){
//         mp[it]++;
//     }
//     ll mx = 0;
//     for(auto it:mp){
//         mx = max(mx, it.second);
//     }
//     if(mx>mp.size()){
//         return false;
//     }
//     return true;
// }

void solve(){
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll ans=0;
    for(ll i=0; i<n; i++){
        ll cnt=1, mx=0;
        map<char, ll> mp;
        for(ll j=i; j<n && cnt<=100; j++){
            mp[s[j]]++;
            mx = max(mx, mp[s[j]]);
            if(mx<=mp.size()){
                ans++;
            }
            cnt++;
        }
    }
    cout<<ans<<endl;
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