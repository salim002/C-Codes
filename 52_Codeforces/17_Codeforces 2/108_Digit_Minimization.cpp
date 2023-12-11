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
    ll mn = INT_MAX;
    for(ll i=0; i<s.size(); i++){
        ll dig = (s[i]-'0');
        mn = min(mn, dig);
    }
    // cout<<mn<<endl;
    if(s.size()<=2){
        // if((s[0]-'0')==mn){
        //     cout<<s[1]<<endl;
        // }
        // else{
        //     cout<<s[0]<<endl;
        // }
        cout<<s[1]<<endl;
    }
    else{
        cout<<mn<<endl;
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