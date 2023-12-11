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

void solve(){
    ll n, q, i;
    cin>>n>>q;
    vl v(n);
    for(i=0; i<n; i++){
        cin>>v[i];
    }
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());
    for(i=1; i<n; i++){
        v[i] = v[i]+v[i-1];
    }
    while(q--){
        ll a;
        cin>>a;
        if(a>v[n-1]){
            cout<<-1<<endl;
        }
        else{
            cout<<1+lower_bound(v.begin(), v.end(), a)-v.begin()<<endl;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}