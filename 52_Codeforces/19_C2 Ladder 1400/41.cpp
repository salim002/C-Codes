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
    int n, m;
    cin>>n>>m;
    vector<string> v;
    for(int i=0; i<n; i++){
        string s;
        cin>>s;
        v.push_back(s);
    }
    vector<vi> p(n, vi(m));
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(v[i][j]=='*'){
                p[i][j]=1;
                if(j-1>=0) p[i][j]+=p[i][j-1];
            }
        }
    }
    // for(auto it:p){
    //     for(auto i:it) cout<<i<<" ";
    //     cout<<'\n';
    // }
    ll ans=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(v[i][j]=='*'){
                int x=i, y=0, cnt=0;
                while(x<n && j-y>=0 && j+y<m){
                    if((p[x][j+y]-p[x][j-y]+1)==2*y+1 && p[x][j-y]!=0){
                        ans++;
                        // cnt++;
                        x++;
                        y++;
                    }
                    else break;
                }
                // cout<<i<<" "<<j<<" --> "<<cnt<<'\n';
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