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
    int m;
    cin>>m;
    int cnt=m;
    map<int, int> mp;
    vector<vector<int>> a;
    while(m--){
        int n;
        cin>>n;
        vi v(n);
        for(int i=0; i<n; i++){
            cin>>v[i];
            mp[v[i]]++;
        }
        a.push_back(v);
    }
    vector<int> ans;
    for(int i=0; i<a.size(); i++){
        for(int j=0; j<a[i].size(); j++){
            if(mp[a[i][j]]==1){
                ans.push_back(a[i][j]);
                break;
            }
        }
        for(int j=0; j<a[i].size(); j++){
            mp[a[i][j]]--;
        }
    }
    if(ans.size()!=cnt){
        cout<<-1<<'\n';
        return;
    }
    for(auto it:ans){
        cout<<it<<" ";
    }
    cout<<'\n';
    // cout<<endl;
    // for(auto it:a){
    //     for(auto i:it){
    //         cout<<i<<" ";
    //     }
    //     cout<<endl;
    // }
    // cout<<endl;
    // for(auto it:ans){
    //     cout<<it<<" ";
    // }
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