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

bool isPrime(int n){
    if (n <= 1){
        return false;
    }
    for(int i=2; i*i<=n; i++) {
        if(n%i==0){
            return false;
        }
    }
    return true;
}

void solve(){
    int n, m;
    cin>>n>>m;
    vector<vector<int>> v(n, vector<int> (m));
    int cnt=1;
    if(!isPrime(m)){
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                v[i][j]=cnt;
                cnt++;
            }
        }
    }
    else if(!isPrime(n)){
        for(int j=0; j<m; j++){
            for(int i=0; i<n; i++){
                v[i][j]=cnt;
                cnt++;
            }
        }
    }
    else{
        for(int i=0; i<n; i+=2){
            for(int j=0; j<m; j++){
                v[i][j]=cnt;
                cnt++;
            }
        }
        for(int i=1; i<n; i+=2){
            for(int j=0; j<m; j++){
                v[i][j]=cnt;
                cnt++;
            }
        }
    }
    for(auto it:v){
        for(auto i:it){
            cout<<i<<" ";
        }
        cout<<endl;
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