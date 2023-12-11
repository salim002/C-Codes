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
    int a, b;
    cin>>a>>b;
    int evenPos=(a+b)/2;
    int oddPos=a+b-evenPos;
    set<int> ans;
    for(int i=0; i<=oddPos; i++){
        int a1 = i;
        int a0 = a-i;
        int b1 = oddPos-i;
        int b0 = evenPos-a0;
        if(a0>=0 && b1>=0 && b0>=0){
            ans.insert(a1+b0);
        }
    }
    for(int i=0; i<=evenPos; i++){
        int a1 = i;
        int a0 = a-i;
        int b1 = evenPos-i;
        int b0 = oddPos-a0;
        if(a0>=0 && b1>=0 && b0>=0){
            ans.insert(a1+b0);
        }
    }
    cout<<ans.size()<<endl;
    for(auto it:ans){
        cout<<it<<" ";
    }
    cout<<endl;
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