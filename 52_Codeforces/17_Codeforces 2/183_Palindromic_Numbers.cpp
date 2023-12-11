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
    string s;
    cin>>s;
    if(s[0]!='9'){
        for(i=0; i<n; i++){
            cout<<9-(s[i]-'0');
        }
        cout<<endl;
    }
    else{
        string ans="";
    		ll x = (11 - (s[n-1]-'0'));
    		ll c=1;
    		if(x>=10){
    			x -= 10;
    			c=0;
    		}
    		ans += (x+'0');
    		for(ll i=n-2; i>=0; i--){
                ll y = s[i]-'0';
                y+=c;
                if(y>8){
                    ans += ((18-y)+'0');
                    c=1;
                }
                else{
                    ans += ((8-y)+'0');
                    c=0;
                }
    		}
        reverse(all(ans));
        cout<<ans<<endl;
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