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
    vl v(n);
    ll sum=0;
    map<ll, ll> mp;
    for(ll i=0; i<n; i++){
        cin>>v[i];
        sum+=v[i];
        mp[v[i]]++;
    }
    // ll m = sum/n;
    if((2*sum)%n!=0){
        cout<<0<<endl;
        return;
    }
    ll k = (2*sum)/n;
    // if(a!=m){
    //     cout<<0<<endl;
    //     return;
    // }
    ll ans=0;
    // sort(all(v));
    for(ll i=0; i<n; i++){
        ll need = k-v[i];
        ans+=mp[need];
        if(need==v[i]){
            ans--;
        }
    }
    cout<<ans/2<<endl;

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