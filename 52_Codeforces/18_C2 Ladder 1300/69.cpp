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

// ll calc(string s, ll idx, ll a, ll b){
//     ll res=0;
//     if(s[idx]=='A'){
//         res+=a;
//     }
//     else{
//         res+=b;
//     }
//     for(ll i=idx+1; i<s.size(); i++){
//         if(s[i]!=s[i-1]){
//             if(s[i]=='A'){
//                 res+=a;
//             }
//             else{
//                 res+=b;
//             }
//         }
//     }
//     return res;
// }

void solve(){
    ll a, b, p;
    cin>>a>>b>>p;
    string s;
    cin>>s;
    // ll l=0, r=s.size()-1, mid, ans=s.size();
    // while(l<=r){
    //     mid=l+(r-l)/2;
    //     if(calc(s, mid, a, b)<=p){
    //         ans=mid+1;
    //         r=mid-1;
    //     }
    //     else{
    //         l=mid+1;
    //     }
    // }
    // cout<<ans<<'\n';
    ll n=s.size();
    vl dp(n);
    if(s[n-2]==s[n-1]){
        if(s[n-1]=='A'){
            dp[n-1]=a;
        }
        else{
            dp[n-1]=b;
        }
    }
    else{
        dp[n-1]=0;
    }
    for(int i=n-2;i>=0;--i){
        dp[i]=dp[i+1];
        if(s[i]!=s[i+1]){
            if(s[i]=='A'){
                dp[i]+=a;
            }
            else{
                dp[i]+=b;
            }
        }
    }
    dp[n-1]=0;
    for(int i=0;i<n;++i){
        if(dp[i]<=p){
            cout<<i+1<<'\n';
            return;
        }
    }
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