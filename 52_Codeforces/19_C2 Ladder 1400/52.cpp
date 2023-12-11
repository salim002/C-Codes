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
    int n, k;
    cin>>n>>k;
    string s;
    cin>>s;
    vi v;
    int ans=0;
    for(int i=0; i<n; i++){
        int j=i+1, cnt=1;
        if(s[i]=='L'){
            if(ans==0) continue;
            while(j<n && s[j]==s[i]){
                cnt++;
                j++;
            }
            v.push_back(cnt);
        }
        else{
            ans++;
            while(j<n && s[j]==s[i]){
                ans+=2;
                j++;
            }
        }
        i=j-1;
    }
    if(s[n-1]=='L' && !v.empty()) v.pop_back();
    int win=count(all(s), 'W');
    if(k==0 || win==n){
        cout<<ans<<'\n';
        return;
    }
    if(k>=n-win){
        cout<<2*n-1<<'\n';
        return;
    }
    ans+=(2*k-1);
    if(win>0) ans++;
    sort(all(v));
    for(auto it:v){
        if(it<=k){
            k-=it;
            ans++;
        }
        else{
            break;
        }
    }
    // for(auto it:v) cout<<it<<" ";
    // cout<<'\n';
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