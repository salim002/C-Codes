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

ll sum(string s){
    ll sum=0;
    for(ll i=0; i<s.size(); i++){
        sum+=(s[i]-'a'+1);
    }
    return sum;
}

void solve(){
    string s;
    cin>>s;
    ll p;
    cin>>p;
    ll n=s.size();
    string t=s;
    sort(all(t));
    ll sm = sum(s);
    if(sm<=p){
        cout<<s<<endl;
        return;
    }
    ll r=n-1;
    while(sm>p){
        sm-=(t[r]-'a'+1);
        t.erase(r);
        r--;
    }
    // cout<<t<<endl;
    map<char, ll> m, m2;
    for(auto it:t){
        m[it]++;
    }
    string ans="";
    for(ll i=0; i<n; i++){
        if(m.find(s[i])!=m.end() && m2[s[i]]<m[s[i]]){
            ans+=s[i];
            m2[s[i]]++;
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