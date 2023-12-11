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
    vl v;
    for(ll i=1; i<n-1; i++){
        if(s[i]!=s[i-1]){
            v.push_back(i);
        }
    }
    cout<<1<<" ";
    for(ll i=1; i<n-1; i++){
        ll ans=i+1;
        if(s[i]!=s[i-1]){
            cout<<ans<<" ";
            continue;
        }
        ll idx = (upper_bound(v.begin(), v.end(), i)-v.begin());
        if(idx==0){
            cout<<1<<" ";
            continue;
        }
        ll tmp = v[idx-1];
        ll k = i-tmp;
        ans -= k;
        cout<<ans<<" ";
    }
    cout<<endl;
    // for(auto it:v){
    //     cout<<it<<" ";
    // }
    // cout<<endl;
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