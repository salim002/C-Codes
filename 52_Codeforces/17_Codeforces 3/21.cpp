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

void solve(){
    ll n, i;
    cin>>n;
    vl v[n+1];
    for(i=1; i<=n; i++){
        ll x;
        cin>>x;
        v[x].push_back(i);
    }
    for(i=1; i<=n; i++){
        if(v[i].size()<=1){
            cout<<v[i].size()<<" ";
        }
        else{
            ll cnt=1;
            for(ll j=1; j<v[i].size(); j++){
                ll gap=v[i][j]-v[i][j-1];
                gap--;
                if(gap%2==0){
                    cnt++;
                }
            }
            cout<<cnt<<" ";
        }
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