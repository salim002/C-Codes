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

vi v = {0, 1, 5, -1, -1, 2, -1, -1, 8, -1};
int INF = 1e9+7;

int fun(int x) {
    string s = to_string(x);
    if(x<10){
        s="0"+s;
    }
    string res="";
    for(int i=1; i>=0; i--){
        if (v[s[i]-'0']==-1){
            return INF;
        }
        res += char(v[s[i]-'0'] + '0');
    }
    return stoi(res);
}

string good(int n){
    string s=to_string(n);
    if(n<10){
        s = "0"+s;
    }
    return s;
}

void solve(){
    int h, m;
    cin>>h>>m;
    string s;
    cin>>s;
    int a=(s[0]-'0')*10+(s[1]-'0');
    int b=(s[3]-'0')*10+(s[4]-'0');
    while(true){
        a+=(b/m);
        b%=m;
        a%=h;
        if(fun(a)<m && fun(b)<h){
            cout<<good(a)<<":"<<good(b)<<'\n';
            return;
        }
        b++;
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