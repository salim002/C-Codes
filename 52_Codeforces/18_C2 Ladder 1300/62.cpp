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
    string s, t;
    cin>>s>>t;
    int p1=0, m1=0, p2=0, m2=0, x=0;
    for(auto it:s){
        if(it=='+'){
            p1++;
        }
        else{
            m1++;
        }
    }
    for(auto it:t){
        if(it=='+'){
            p2++;
        }
        else if(it=='-'){
            m2++;
        }
        else{
            x++;
        }
    }
    double ans=1;
    int d1=p1-m1, d2=p2-m2;
    if(d1==d2 && x==0){
        cout<<setprecision(9)<<fixed<<ans<<endl;
        return;
    }
    if(p2<=p1){
        p1-=p2;
        p2=0;
    }
    else{
        p2-=p1;
        p1=0;
    }
    if(m2<=m1){
        m1-=m2;
        m2=0;
    }
    else{
        m2-=m1;
        m1=0;
    }
    p1+=m2;
    m1+=p2;
    if(p1+m1>x){
        ans=0;
        cout<<setprecision(9)<<fixed<<ans<<endl;
        return;
    }
    double total = pow(2, x);
    double curr = nCr(x, p1);
    ans=curr/total;
    cout<<setprecision(9)<<fixed<<ans<<endl;
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