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
    ll n, k, i;
    cin>>n>>k;
    vl v(n);
    map<ll, ll> m1;
    map<ll, ll> m2;
    for(i=0; i<n; i++){
        cin>>v[i];
        if(m1.find(v[i])==m1.end()){
            m1[v[i]]=i;
        }
        m2[v[i]]=i;
    }
    while(k--){
        ll a, b;
        cin>>a>>b;
        if(m2.find(a)==m2.end() || m2.find(b)==m2.end()){
            cout<<"NO"<<endl;
            continue;
        }
        ll l=m1[a];
        ll r=m2[b];
        if(r>l){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
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