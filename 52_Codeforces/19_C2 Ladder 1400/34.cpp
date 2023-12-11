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
    return ((a%mod)*(b%mod))%mod;
}

ll modPower(ll a, ll b){
    if(b==0){
        return 1;
    }
    a = a%mod;
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
    return mul(a, modPower(b, mod-2));
}

ll nCr(ll n, ll r){
    return dv(fac(n), mul(fac(r), fac(n-r)));
}

bool isPrime(int n){
    if(n<=1){
        return false;
    }
    if(n<=3){
        return true;
    }
    if(n%2==0 || n%3==0){
        return false;
    }
    for(int i=5; i*i<=n; i+=6){
        if(n%i==0 || n%(i+2)==0){
            return false;
        }
    }
    return true;
}

void solve(){
    ll n, e;
    cin>>n>>e;
    vl v(n), left(n), right(n);
    for(ll i=0; i<n; i++){
        cin>>v[i];
    }
    for(ll i=0; i<e; i++){
        ll j=i, cnt=0;
        while(j<n){
            if(v[j]>1){
                left[j]=cnt+1;
                cnt=0;
            }
            else{
                cnt++;
            }
            j+=e;
        }
        cnt=0;
        j-=e;
        while(j>=0){
            if(v[j]>1){
                right[j]=cnt+1;
                cnt=0;
            }
            else{
                cnt++;
            }
            j-=e;
        }
    }
    // for(auto it:left) cout<<it<<" ";
    // cout<<endl;
    // for(auto it:right) cout<<it<<" ";
    // cout<<endl;
    ll ans=0;
    for(ll i=0; i<n; i++){
        if(isPrime(v[i])){
            // cout<<i<<" "<<left[i]<<" "<<right[i]<<endl;
            ans+=(left[i]*right[i]-1);
        }
    }
    cout<<ans<<'\n';
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