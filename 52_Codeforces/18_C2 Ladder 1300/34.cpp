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
    ll a, b;
    cin>>a>>b;
    string s;
    cin>>s;
    vector<pair<int, int>> v;
    ll cnt=0;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='1'){
            cnt++;
            int tmp=1, j=i+1;
            while(j<s.size() && s[i]==s[j]){
                tmp++;
                j++;
            }
            i=j-1;
            v.push_back({1, tmp});
        }
        else{
            int tmp=1, j=i+1;
            while(j<s.size() && s[i]==s[j]){
                tmp++;
                j++;
            }
            i=j-1;
            v.push_back({0, tmp});
        }
    }
    // for(auto it:v){
    //     cout<<it.first<<" "<<it.second<<endl;
    // }
    ll extra=0;
    for(int i=0; i<v.size(); i++){
        if(v[i].first==1){
            if(i+2<v.size() && v[i+1].second*b<=a){
                extra+=(v[i+1].second*b);
                cnt--;
            }
        }
    }
    cout<<cnt*a+extra<<'\n';
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