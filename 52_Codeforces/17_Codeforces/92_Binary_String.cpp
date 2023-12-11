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
    string s;
    cin>>s;
    ll n = s.size();
    ll zero=0;
    for(ll i=0; i<n; i++){
        if(s[i]=='0'){
            zero++;
        }
    }
    if(zero==0 || zero==n){
        cout<<0<<endl;
        return;
    }
    vl v;
    for(ll i=0; i<n; i++){
        if(s[i]=='1'){
            v.push_back(i);
        }
    }
    ll p, q, r, mx, ans=mod;
    auto x = v.begin();
    auto it = v.begin();
    while(it!= v.end()){
        p = lower_bound(v.begin(), v.end(), *it) - lower_bound(v.begin(), v.end(), *x);
        q = *it - *x - p;
        r = v.size() - p - 1;
        // cout<<q<<" "<<r<<" "<<*it<<" "<<*x;
        mx = max(q, r);
        if(mx<ans){
            ans=mx;
        }
        if(q<r){
            it++;
        }
        else{
            x++;
        }
    }
    cout<<ans<<endl;
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