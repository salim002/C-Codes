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
    ll n, i, j;
    cin>>n;
    vl v(n);
    for(i=0; i<n; i++){
        cin>>v[i];
    }
    ll ans=n;
    ll sum=0;
    for(i=0; i<n; i++){
        sum+=v[i];
        ll mxlen=i+1;
        ll curr=0, currsum=0;
        bool ok=false;
        for(j=i+1; j<n; j++){
            if(currsum+v[j]>sum){
                break;
            }
            if(j==n-1 && currsum+v[j]==sum){
                mxlen=max(mxlen, curr+1);
                ok=true;
                break;
            }
            currsum+=v[j];
            curr++;
            if(currsum==sum){
                mxlen = max(mxlen, curr);
                curr=0;
                currsum=0;
            }
        }
        if(ok){
            ans=min(ans, mxlen);
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