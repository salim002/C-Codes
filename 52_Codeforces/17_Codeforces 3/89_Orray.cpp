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
    vl v(n), ans;
    for(ll i=0; i<n; i++){
        cin>>v[i];
    }
    ll currOR=0;
    map<ll, bool> vis;
    for(ll i=0; i<min(30LL, n); i++){
        ll mx=0, idx=-1;
        for(ll j=0; j<n; j++){
            if(vis[j]){
                continue;
            }
            if((currOR | v[j])>mx){
                mx = currOR | v[j];
                idx=j;
            }
        }
        vis[idx]=true;
        ans.push_back(v[idx]);
        currOR = mx;
    }
    for(ll i=0; i<n; i++){
        if(!vis[i]){
            ans.push_back(v[i]);
        }
    }
    for(auto it:ans){
        cout<<it<<" ";
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