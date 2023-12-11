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

ll fac(ll n){
    ll res=1;
    for(ll i=2; i<=n; i++){
        res*=i;
    }
    return res;
}

ll nCr(ll n, ll r){
    return fac(n)/(fac(r) * fac(n-r));
}

string mex(string s){
    set<char> st(all(s));
    char c = 'a';
    for(auto it:st){
        if(it==c){
            c++;
        }
        else{
            break;
        }
    }
    string ans;
    ans+=c;
    return ans;
}

void solve(){
    ll n, k, i;
    cin>>n>>k;
    string s;
    cin>>s;
    sort(all(s));
    string ans;
    ll m=n/k;
    map<char, int> mp;
    for(auto it:s){
        mp[it]++;
    }
    while(k--){
        ll temp=m;
        char ch='a';
        while(temp--){
            if(mp[ch]>0){
                mp[ch]--;
                ch++;
            }
            else{
                break;
            }
        }
        ans+=ch;
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