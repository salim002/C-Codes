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
    int n, k;
    cin>>n>>k;
    string s;
    cin>>s;
    map<char, int> mp;
    for(auto it:s){
        mp[it]++;
    }
    int odd=0, total=0;
    for(auto it:mp){
        if(it.second&1){
            odd++;
            total+=(it.second-1);
        }
        else{
            total+=it.second;
        }
    }
    total/=2;
    int ans=total/k;
    ans*=2;
    total%=k;
    if(total==0){
        if(odd>=k){
            ans++;
        }
    }
    else{
        int tmp=k-2*total;
        if(tmp==0){
            ans++;
        }
        else{
            if(odd>=tmp){
                ans++;
            }
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