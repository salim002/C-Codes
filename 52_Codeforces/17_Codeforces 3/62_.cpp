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
#define mp make_pair
#define pb push_back
const int mod = 1000000007;
// const int mod = 998244353;
#define all(x) x.begin(), x.end()
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

ll fac(ll n){
    ll res=1;
    for(ll i=2; i<=n; i++){
        res*=i;
    }
    return res;
}

ll nCr(ll n, ll r){
    return fac(n)/(fac(r) * fac(n-r));
}

bool func(map<ll, ll> a, map<ll, ll> b, ll count1, ll count2){
    ll c1, c2;
    for(ll i = 1; i <26; i++){
        if(b[i]){
            return true;
        }
    }
    if(a[0]<b[0] && count1 ==  a[0]){
        return true;
    }
    return false;
}

void solve(){
    map<ll, ll> a, b;
    a[0] = 1;
    b[0] = 1;
    ll n;
    cin>>n;
    ll count1 = 1,count2 = 1;
    for(ll i = 0; i <n; i++){
        ll c,k;
        string y;
        cin>>c>>k>>y;
        if(c == 1){
            for(auto x:y){
                a[x-'a'] += k;
                count1+=k;
            }
        }
        else{
            for(auto x:y){
                b[x-'a'] +=k;
            }
        }
        if(!func(a, b,count1, count2)){
            cout<<"NO"<<endl;
            return;
        }
        cout<<"YES"<<endl;
    }
}

int main(){
    fast_io
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}