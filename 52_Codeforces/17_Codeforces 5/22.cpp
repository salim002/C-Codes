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
    int n;
    cin>>n;
    vi v(n);
    int mx=0, idx=0;
    for(int i=0; i<n; i++){
        cin>>v[i];
        if(v[i]>=mx){
            mx=v[i];
            idx=i;
        }
    }
    if(n==1){
        cout<<v[0]<<'\n';
        return;
    }
    int target=0;
    if(idx!=0){
        target=idx;
    }
    else{
        int tmp=0;
        for(int i=1; i<n; i++){
            if(v[i]>=tmp){
                tmp=v[i];
                target=i;
            }
        }
    }
    if(target==n-1 && v[target-1]<v[0]){
        vi ans;
        ans.push_back(v[n-1]);
        for(int i=0; i<n-1; i++){
            ans.push_back(v[i]);
        }
        for(int i=0; i<n; i++){
            cout<<ans[i]<<" ";
        }
        cout<<'\n';
    }
    else{
        vi ans;
        for(int i=target; i<n; i++){
            ans.push_back(v[i]);
        }
        ans.push_back(v[target-1]);
        int l=0, r=target-2;
        while(l<r && v[r]>v[l]){
            ans.push_back(v[r]);
            // l++;
            r--;
        }
        for(int i=0; i<=r; i++){
            ans.push_back(v[i]);
        }
        for(int i=0; i<n; i++){
            cout<<ans[i]<<" ";
        }
        cout<<'\n';
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