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
    for(ll i=s.size()-1; i>0; i--){
        if(((s[i]-'0') + (s[i-1]-'0'))>9){
            ll sum = (s[i]-'0')+(s[i-1]-'0');
            ll a = sum%10;
            string temp = s.substr(0, i-1);
            temp += (1+'0');
            temp += (a+'0');
            temp += s.substr(i+1);
            cout<<temp<<endl;
            return;
        }
    }
    ll sum = (s[0]-'0')+(s[1]-'0');
    string sum1 = to_string(sum);
    sum1 += s.substr(2);
    cout<<sum1<<endl;

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