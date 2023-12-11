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

vector<vector<int>> pref(200002, vector<int>(19));
void fun(){
    vector<string> v;
    for(int i=1; i<=200001; i++){
        string s=bitset<19> (i).to_string();
        v.push_back(s);
    }
    pref[1][18]=1;
    for(int i=2; i<200001; i++){
        vector<int> tmp=pref[i-1];
        for(int j=0; j<19; j++){
            if(v[i-1][j]=='1'){
                tmp[j]++;
            }
        }
        pref[i]=tmp;
    }
}

void solve(){
    int l, r;
    cin>>l>>r;
    int ans=INT_MAX;
    for(int i=0; i<19; i++){
        int set = pref[r][i]-pref[l-1][i];
        int unset=r-l+1-set;
        ans=min(ans, unset);
    }
    cout<<ans<<'\n';
}

int main(){
    fast_io
    fun();
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}