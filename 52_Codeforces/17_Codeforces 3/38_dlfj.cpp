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
    ll a=0, b=0, c=0, d=0;
    vector<pair<ll, ll>> v(n);
    for(i=0; i<n; i++){
        cin>>v[i].first>>v[i].second;
        if(v[i].first<0){
            a=min(a, v[i].first);
        }
        else{
            b=max(b, v[i].first);
        }
        if(v[i].second<0){
            c=min(c, v[i].second);
        }
        else{
            d=max(d, v[i].second);
        }
    }
    cout<<(b+d-a-c)*2<<endl;
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