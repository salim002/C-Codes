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
    if(n==2){
        cout<<1<<" "<<3<<'\n';
        cout<<4<<" "<<2<<'\n';
        return;
    }
    int cnt=n*n;
    vector<vi> ans;
    queue<int> q;
    vector<bool> vis(cnt+1);
    int l=1, r=n*n;
    bool ok=true;
    for(int i=0; i<n; i++){
        vi tmp;
        for(int j=0; j<n; j++){
            if(ok){
                tmp.push_back(l);
                ok=false;
                l++;
            }
            else{
                tmp.push_back(r);
                ok=true;
                r--;
            }
        }
        ans.push_back(tmp);
    }
    if(!(n&1)){
        for(int i=1; i<n; i+=2){
            reverse(all(ans[i]));
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<ans[i][j]<<" ";
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