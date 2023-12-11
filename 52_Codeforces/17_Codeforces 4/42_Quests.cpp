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

ll isPossible(vl v, ll n, ll d, ll k){
    ll sum=0;
    for(ll i=0; i<d; i++){
        if(i%k<n){
            sum+=v[i%k];
        }
    }
    return sum;
}

void solve(){
    ll n, c, d;
    cin>>n>>c>>d;
    vl v(n);
    for(ll i=0; i<n; i++){
        cin>>v[i];
    }
    sort(v.rbegin(), v.rend());
    ll sum=0, x=d, i=0;
    while(x-- && i<n){
        sum+=v[i];
        i++;
    }
    if(sum>=c){
        cout<<"Infinity"<<endl;
        return;
    }
    sum=0, x=d;
    while(x--){
        sum+=v[0];
    }
    if(sum<c){
        cout<<"Impossible"<<endl;
        return;
    }
    ll ans=0;
    ll l=0, r=d+2;
    while(l<=r){
        ll mid = l+(r-l+1)/2;
        if(isPossible(v, n, d, mid)>=c){
            ans=mid-1;
            l=mid+1;
        }
        else{
            r=mid-1;
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