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
    vl a1(n), a2(n);
    for(i=0; i<n; i++){
        cin>>a1[i];
    }
    for(i=0; i<n; i++){
        cin>>a2[i];
    }
    vl v0, v1;
    for(i=0; i<n; i++){
        if(a1[i]==0){
            v0.push_back(a2[i]);
        }
        else{
            v1.push_back(a2[i]);
        }
    }
    sort(all(v0));
    sort(all(v1));
    ll ans=0;
    if(v0.size()==v1.size()){
        ans -= min(v0.front(), v1.front());
    }
    while(!v0.empty() && !v1.empty()){
        ans += (v0.back()+v1.back())*2;
        v0.pop_back();
        v1.pop_back();
    }
    for(auto it:v0){
        ans+=it;
    }
    for(auto it:v1){
        ans+=it;
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