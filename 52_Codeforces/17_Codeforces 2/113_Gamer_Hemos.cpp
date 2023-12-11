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
    ll n, h, i;
    cin>>n>>h;
    vl v(n);
    for(i=0; i<n; i++){
        cin>>v[i];
    }
    sort(v.begin(), v.end());
    ll a = h/(v.back() + v[v.size()-2]);
    h -= (a*(v.back() + v[v.size()-2]));
    if(h==0){
        cout<<2*a<<endl;
    }
    else if(h<=v.back()){
        cout<<2*a+1<<endl;
    }
    else{
        cout<<2*a+2<<endl;
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