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
    ll n, m, i, j;
    cin>>n>>m;
    vector<string> v(n);
    for(i=0; i<n; i++){
        cin>>v[i];
    }
    ll cnt=0;
    bool isSingle=false, isDouble = false;
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            if(v[i][j]=='1'){
                cnt++;
            }
            else{
                isSingle=true;
            }
        }
    }
    for(i=0; i<n-1; i++){
        for(j=0; j<m-1; j++){
            ll temp = v[i][j]+v[i][j+1]+v[i+1][j]+v[i+1][j+1]-4*('0');
            if(temp<=2){
                isDouble=true;
            }
        }
    }
    if(cnt==0){
        cout<<0<<endl;
        return;
    }
    if(isDouble){
        cout<<cnt<<endl;
    }
    else if(isSingle){
        cout<<cnt-1<<endl;
    }
    else{
        cout<<cnt-2<<endl;
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