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
    map<char, ll> m;
    for(i=1; i<=2*n; i++){
        string s;
        cin>>s;
        for(auto it:s){
            m[it]++;
        }
    }
    string s;
    cin>>s;
    for(auto it:s){
        m[it]++;
    }
    char ans;
    for(char c='a'; c<='z'; c++){
        if(m[c]%2==1){
            ans=c;
            break;
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