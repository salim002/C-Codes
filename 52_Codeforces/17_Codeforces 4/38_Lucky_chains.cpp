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

const int N=1e7+5;
vi prime(N);
void seive(){
    for(int i=0; i<N; i++){
        prime[i]=i;
    }
    for(int p=2; p<N; p++){
        if(prime[p]!=p){
            continue;
        }
        for(int d=2*p; d<N; d+=p){
            prime[d] = min(prime[d], p);
        }
    }
}

vi leastFactor(int n){
    vi v;
    while(n>1){
        if(v.empty() || v.back()!=prime[n]){
            v.push_back(prime[n]);
        }
        n/=prime[n];
    }
    return v;
}


void solve(){
    int a, b;
    cin>>a>>b;
    int d=b-a;
    if(d==1){
        cout<<-1<<endl;
        return;
    }
    int r=INT_MAX;
    for(auto it:leastFactor(d)){
        r = min(r,((a+it-1)/it)*it);
    }
    cout<<r-a<<endl;
}

int main(){
    fast_io
    seive();
    int n;
    cin>>n;
    while(n--){
        solve();
    }
    return 0;
}