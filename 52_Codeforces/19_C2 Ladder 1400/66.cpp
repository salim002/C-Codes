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
    if(m>2*n+2 || n>m+1){
        cout<<-1<<'\n';
        return;
    }
    if(n==0){
        if(m==1) cout<<"1"<<'\n';
        else if(m==2) cout<<"2"<<'\n';
        else cout<<"-1"<<'\n';
        return;
    }
    if(m==0){
        if(n==1) cout<<"0"<<'\n';
        else cout<<"-1"<<'\n';
        return;
    }
    string ans="";
    if(m>n){
        while(m>n && n>0){
            ans+="11";
            ans+="0";
            m-=2;
            n--;
        }
        if(n==0){
            while(m>0){
                ans+="1";
                m--;
            }
        }
        while(m>0){
            ans+="1";
            ans+="0";
            m--;
        }
    }
    else{
        while(n>0 && m>0){
            ans+="0";
            ans+="1";
            n--;
            m--;
        }
        if(n>0){
            ans+="0";
        }
    }
    cout<<ans<<'\n';
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