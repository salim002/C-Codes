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
    string ans="";
    ll k=9;
    while(n){
        if(n>k){
            ll tmp = k;
            string s = to_string(tmp);
            ans+=s;
            n-=k;
            k--;
        }
        else{
            string s=to_string(n);
            ans+=s;
            break;
        }
    }
    reverse(all(ans));
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