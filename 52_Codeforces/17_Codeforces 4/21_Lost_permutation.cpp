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
    ll m, s;
    cin>>m>>s;
    vl v(m);
    ll mx=0, sum=0;
    map<ll, bool> mpp;
    for(ll i=0; i<m; i++){
        cin>>v[i];
        mpp[v[i]]=true;
        mx = max(mx, v[i]);
    }
    for(ll i=1; i<=mx; i++){
        if(!mpp[i]){
            sum+=i;
        }
    }
    // if(sum==0){
    //     cout<<"NO"<<endl;
    //     return;
    // }
    while(sum<s){
        sum+=mx+1;
        mx++;
    }
    if(sum==s){
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