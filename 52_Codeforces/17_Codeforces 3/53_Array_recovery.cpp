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

void solve(){
    ll n, i;
    cin>>n;
    vl d(n), a(n);
    for(i=0; i<n; i++){
        cin>>d[i];
    }
    a[0]=d[0];
    for(i=1; i<n; i++){
        a[i]=a[i-1]+d[i];
        if((a[i-1]-d[i])>=0 && a[i-1]!=a[i]){
            cout<<-1<<endl;
            return;
        }
    }
    for(auto it:a){
        cout<<it<<" ";
    }
    cout<<endl;
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