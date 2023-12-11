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
    vi v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    int l=1, r=n-1;
    int a=v[0], b=0;
    int alice=v[0], bob=0, steps=1;
    bool f=true;
    while(l<=r){
        if(f){
            int j=r, tmp=0;
            while(j>=l && tmp<=a){
                tmp+=v[j];
                j--;
            }
            b=tmp;
            bob+=tmp;
            r=j;
            f=false;
        }
        else{
            int j=l, tmp=0;
            while(j<=r && tmp<=b){
                tmp+=v[j];
                j++;
            }
            l=j;
            a=tmp;
            alice+=tmp;
            f=true;
        }
        steps++;
    }
    cout<<steps<<" "<<alice<<" "<<bob<<'\n';
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