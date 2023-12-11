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

void solve(){
    int n, f=0;
    cin>>n;
    vi v(n);
    unordered_map<int, int> mp1, mp2;
    int mx1=0, mx2=0;
    set<int> st1, st2;
    for(int i=0; i<n; i++){
        cin>>v[i];
        mx2=max(mx2, v[i]);
        st2.insert(v[i]);
        mp2[v[i]]++;
        if(mp2[v[i]]>2) f=1;
    }
    if(f){
        cout<<0<<'\n';
        return;
    }
    vector<pair<int, int>> ans;
    for(int i=0; i<n-1; i++){
        if(mp1[v[i]]>0) break;
        mp1[v[i]]++;
        mx1=max(mx1, v[i]);
        mp2[v[i]]--;
        if(mp2[v[i]]==0){
            mp2.erase(v[i]);
            if(v[i]==*--st2.end()){
                st2.erase(v[i]);
                mx2=*--st2.end();
            }
            else{
                st2.erase(v[i]);
            }
        }
        if(mp1.size()==i+1 && mp2.size()==n-i-1 && mx1==i+1 && mx2==n-i-1){
            ans.push_back({i+1, n-i-1});
        }
    }
    cout<<ans.size()<<'\n';
    if(ans.size()>0){
        for(auto it:ans){
            cout<<it.first<<" "<<it.second<<'\n';
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