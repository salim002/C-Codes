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
    ll n, a, b, i;
    cin>>n>>a>>b;
    vector<pair<ll, ll>> v(n);
    for(i=0; i<n; i++){
        cin>>v[i].first>>v[i].second;
    }
    ll k=a*60+b;
    sort(all(v));
    ll x=0, y=0, an=0;
    for(i=0; i<n; i++){
        ll j=v[i].first*60+v[i].second;
        if(j>=k){
            an=j-k;
            break;
        }
    }
    if(an==0 && k>v[n-1].first*60+v[n-1].second){
        an=v[0].first*60+v[0].second + 24*60-k;
    }
    x=an/60;
    y=an%60;
    cout<<x<<" "<<y<<endl;

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