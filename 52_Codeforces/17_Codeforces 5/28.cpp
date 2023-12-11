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
#define pb push_back
#define all(x) x.begin(), x.end()
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

const int mod = 1000000007;
const ll M = 998244353;

ll mul(ll a, ll b){
    return ((a%M)*(b%M))%M;
}

ll modPower(ll a, ll b){
    if(b==0){
        return 1;
    }
    a = a%M;
    ll res=1;
    while(b>0){
        if(b&1){
            res = mul(res, a);
        }
        b = b>>1;
        a = mul(a, a);
    }
    return res;
}

ll fac(ll n){
    ll res=1;
    for(ll i=2; i<=n; i++){
        res = mul(res, i);
    }
    return res;
}

ll dv(ll a, ll b){
    return mul(a, modPower(b, M-2));
}

ll nCr(ll n, ll r){
    return dv(fac(n), mul(fac(r), fac(n-r)));
}

void solve(){
    ll n;
    cin>>n;
    vl a(n), b(n);
    map<ll, ll> mp1, mp2;
    for(ll i=0; i<n; i++){
        cin>>a[i];
    }
    for(ll i=0; i<n; i++){
        cin>>b[i];
    }
    for(ll i=0; i<n; i++){
        if(i+1<n && a[i]==a[i+1]){
            ll j=i;
            ll cnt=1;
            while(j+1<n && a[j]==a[j+1]){
                cnt++;
                j++;
            }
            mp1[a[i]] = max(mp1[a[i]], cnt);
            i=j;
        }
        else{
            mp1[a[i]]=max(mp1[a[i]], ll(1));
        }
    }
    for(ll i=0; i<n; i++){
        if(i+1<n && b[i]==b[i+1]){
            ll j=i;
            ll cnt=1;
            while(j+1<n && b[j]==b[j+1]){
                cnt++;
                j++;
            }
            mp2[b[i]] = max(mp2[b[i]], cnt);
            i=j;
        }
        else{
            mp2[b[i]]=max(mp2[b[i]], ll(1));
        }
    }
    ll ans=0;
    for(ll i=1; i<=2*n; i++){
        ans = max(ans, mp1[i]+mp2[i]);
    }
    cout<<ans<<endl;
}

int main(){
    fast_io
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}