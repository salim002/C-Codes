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
    int n, q;
    cin>>n>>q;
    vl v(n);
    map<ll, ll> mp;
    bool f=false;
    int prev=0, next=0, cnt=0;
    for(int i=0; i<n; i++){
        cin>>v[i];
        if(v[i]==1){
            cnt++;
            next++;
            prev=next;
            f=true;
        }
        else{
            next+=2;
            if(i>0 && v[i-1]!=1 && f){
                prev=next;
            }
        }
    }
    while(q--){
        int a;
        cin>>a;
        if(a==1){
            int b;
            cin>>b;
            if(!f && b&1){
                cout<<"NO"<<'\n';
                continue;
            }
            if(b<prev) cout<<"YES"<<'\n';
            else if(b==next) cout<<"YES"<<'\n';
            else if(b>next) cout<<"NO"<<'\n';
            else{
                if(prev==next) cout<<"YES"<<'\n';
                else cout<<"NO"<<'\n';
            }
        }
        else{
            int c, d;
            cin>>c>>d;
            c--;
            if(v[c]==1){
                cnt--;
                if(cnt==0) f=false;
            }
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