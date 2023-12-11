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
    vi v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    ll a=0, b=1;
    map<int, bool> mp;
    for(int i=n; i>n-k; i--){
        mp[i]=true;
        a+=i;
    }
    int l=0, r=n-1;
    for(int i=0; i<n; i++){
        if(mp[v[i]]){
            l=i;
            break;
        }
    }
    for(int i=r; i>=l; i--){
        if(mp[v[i]]){
            r=i;
            break;
        }
    }
    int cnt=1;
    for(int i=l; i<=r; i++){
        if(mp[v[i]]){
            b=(b*cnt)%M;
            cnt=1;
        }
        else{
            cnt++;
        }
    }
    cout<<a<<" "<<b<<endl;
}

int main(){
    fast_io
    // int t;
    // cin>>t;
    // while(t--){
    // }
    solve();
    return 0;
}