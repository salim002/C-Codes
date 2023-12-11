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
    ll n, i;
    cin>>n;
    string s;
    cin>>s;
    ll ans = 0;
    if(n%2==1){
        ans++;
    }
    ll x = n/2;
    for(i=x-1; i>=0; i--){
        if(s[i]==s[x]){
            ans += 2;
        }
        else{
            break;
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