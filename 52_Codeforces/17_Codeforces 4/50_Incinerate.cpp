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
    vi h(n), p(n);
    for(int i=0; i<n; i++){
        cin>>h[i];
    }
    for(int i=0; i<n; i++){
        cin>>p[i];
    }
    vector<pair<int, int>> v;
    for(int i=0; i<n; i++){
        v.push_back({p[i], h[i]});
    }
    sort(all(v));
    int cnt=0, tmp=0, idx=0;
    int mx=*max_element(all(h));
    // for(auto it:v){
    //     cout<<it.first<<" "<<it.second<<endl;
    // }
    while(true){
        mx-=k;
        if(mx<=0){
            cout<<"YES"<<endl;
            return;
        }
        cnt+=k;
        for(int i=idx; i<n; i++){
            if((v[i].second-cnt)>0){
                k-=v[i].first;
                idx=i;
                break;
            }
        }
        if(k<=0){
            cout<<"NO"<<endl;
            return;
        }
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