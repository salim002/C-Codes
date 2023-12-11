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
    int n, m;
    cin>>n>>m;
    map<int, int> mp;
    int cnt=n;
    for(int i=0; i<m; i++){
        int u, v;
        cin>>u>>v;
        if(u>v){
            swap(u, v);
        }
        if(mp[u]==0){
            cnt--;
        }
        mp[u]++;
    }
    int q;
    cin>>q;
    while(q--){
        int x;
        cin>>x;
        if(x==3){
            cout<<cnt<<'\n';
        }
        else if(x==1){
            int y, z;
            cin>>y>>z;
            if(y>z){
                swap(y, z);
            }
            if(mp[y]==0){
                cnt--;
            }
            mp[y]++;
        }
        else{
            int y, z;
            cin>>y>>z;
            if(y>z){
                swap(y, z);
            }
            mp[y]--;
            if(mp[y]==0){
                cnt++;
            }
        }
    }
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