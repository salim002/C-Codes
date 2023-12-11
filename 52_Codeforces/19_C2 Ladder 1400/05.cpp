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
    vi v(n), ans(n);
    map<int, vector<int>> mp;
    for(int i=0; i<n; i++){
        cin>>v[i];
        if(mp[v[i]].size()<k){
            mp[v[i]].push_back(i);
        }
    }
    int cnt=0;
    for(auto it:mp){
        cnt+=it.second.size();
    }
    cnt-=cnt%k;
    int ptr=0;
    bool f=false;
    for(auto it:mp){
        for(auto i:it.second){
            ans[i]=ptr+1;
            ptr++;
            ptr%=k;
            cnt--;
            if(cnt==0){
                f=true;
                break;
            }
        }
        if(f){
            break;
        }
    }
    for(auto it:ans){
        cout<<it<<" ";
    }
    cout<<'\n';
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