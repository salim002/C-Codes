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
    string s, t;
    cin>>s>>t;
    map<char, ll> m;
    for(ll i=0; i<t.size(); i++){
        m[t[i]]++;
    }
    if(m['a']){
        if(t.size()==1){
            cout<<1<<endl;
            return;
        }
        else{
            cout<<-1<<endl;
            return;
        }
    }
    else{
        ll n = s.size();
        ll ans = (1LL<<n);
        cout<<ans<<endl;
        return;
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