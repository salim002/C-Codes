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
    int n, q;
    cin>>n>>q;
    vi v(n+1);
    for(int i=1; i<=n; i++){
        cin>>v[i];
    }
    vi p(n+2);
    while(q--){
        int a, b, c;
        cin>>a;
        if(a==1){
            cin>>b>>c;
            p[b]++;
            p[c+1]--;
        }
        else{
            cin>>b;
            int cnt=0;
            for(int i=b; i>=0; i--){
                cnt+=p[i];
            }
            int ans=0;
            string tmp=to_string(v[b]);
            while(cnt--){
                for(auto it:tmp){
                    ans+=(it-'0');
                }
                tmp=to_string(ans);
            }
            cout<<ans<<'\n';
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