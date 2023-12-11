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

void solve(){
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll x=count(s.begin(), s.end(), '0');
    ll y=count(s.begin(), s.end(), '1');
    vl v;
    ll tmp=1;
    for(ll i=1; i<n; i++){
        if(s[i]==s[i-1]){
            tmp++;
        }
        else{
            v.push_back(tmp);
            tmp=1;
        }
    }
    v.push_back(tmp);
    // for(auto it:v){
    //     cout<<it<<" ";
    // }
    // cout<<endl;
    ll mx = *max_element(v.begin(), v.end());
    // cout<<mx<<endl;
    cout<<max(mx*mx, x*y)<<endl;

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