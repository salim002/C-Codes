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
    vector<string> v;
    for(int i=0; i<s.size(); i++){
        string tmp="";
        for(int j=i; j<s.size(); j++){
            tmp+=s[j];
            string str = s.substr(0, j);
            reverse(all(str));
            string res=tmp+str;
            v.push_back(res);
        }
    }
    for(auto it:v){
        if(it.find(t)!=string::npos){
            cout<<"YES"<<'\n';
            return;
        }
    }
    cout<<"NO"<<'\n';
    // for(auto it:v){
    //     cout<<it<<" ";
    // }
    // cout<<endl<<endl;
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