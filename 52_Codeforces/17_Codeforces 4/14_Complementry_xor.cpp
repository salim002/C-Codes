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
    string a, b;
    cin>>a>>b;
    bool ok = true;
    for(ll i=0; i<n; i++){
        if(a[i] != char('1'-b[i]+'0')){
            ok=false;
            break;
        }
    }
    vector<pair<ll, ll>> v;
    if(ok){
        v.push_back({1, n});
    }
    ok = ok || (a==b);
    // cout<<ok<<endl;
    if(!ok){
        cout<<"NO"<<endl;
        return;
    }
    vl p(n);
    if(b[0]=='1'){
        v.push_back({1, n});
        v.push_back({2, n});
    }
    for(ll i=1; i<n; i++){
        if(b[i]=='1'){
            p[i]++;
            p[i-1]++;
        }
    }
    for(ll i=0; i<n; i++){
        if(p[i]==1){
            v.push_back({1, i+1});
        }
    }
    cout<<"YES"<<endl;
    cout<<v.size()<<endl;
    for(auto it:v){
        cout<<it.first<<" "<<it.second<<endl;
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