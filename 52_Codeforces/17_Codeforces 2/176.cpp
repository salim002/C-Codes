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

bool isPalindrome(string s){
    string t=s;
    reverse(all(t));
    return s==t;
}

ll addTime(ll m, ll hr, ll mi){
    ll t=0, ans=0;
    bool flag=true;
    while(flag){
        t+=m;
        mi+=m;
        hr+=mi/60;
        hr%=24;
        mi%=60;
        string s;
        if(hr<10){
            s+='0';
        }
        s+=to_string(hr);
        s+=':';
        if(mi<10){
            s+='0';
        }
        s+=to_string(mi);
        ans+=isPalindrome(s);
        if(t%1440==0){
            flag=false;
        }
    }
    return ans;
}

void solve(){
    ll x, i;
    string s;
    cin>>s;
    cin>>x;
    ll h=(s[0]-'0')*10+s[1]-'0';
    ll m=(s[3]-'0')*10+s[4]-'0';
    // cout<<h<<" "<<m<<endl;
    cout<<addTime(x, h, m)<<endl;
    
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