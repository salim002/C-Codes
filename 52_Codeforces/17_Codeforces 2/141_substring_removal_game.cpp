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
    string s;
    cin>>s;
    s += '0';
    vl v;
    ll c=0;
    for(ll i=0; i<s.size(); i++){
        if(s[i]=='1'){
            c++;
        }
        else{
            v.push_back(c);
            c=0;
        }
    }
    sort(all(v));
    reverse(all(v));
    ll ans=0;
    for(ll i=0; i<v.size(); i++){
        if(i%2==0){
            ans+=v[i];
        }
    }
    cout<<ans<<endl;
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