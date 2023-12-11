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
    ll n, k, i;
    cin>>n>>k;
    string str;
    cin>>str;
    if(str.find('B')==string::npos){
        cout<<k<<endl;
        return;
    }
    // ll b=0;
    // for(i=0; i<n; i++){
    //     if(s[i]=='B'){
    //         ll cnt=0;
    //         while(s[i]=='B' && i<n){
    //             cnt++;
    //             i++;
    //         }
    //         b = max(b, cnt);
    //     }
    // }
    // if(b>=k){
    //     cout<<0<<endl;
    //     return;
    // }
    ll ans=0;
    for(i=0; i<k; i++){
        if(str[i]=='W'){
            ans++;
        }
    }
    ll cnt=ans;
    for(i=1; i<n-k+1; i++){
        if(str[i+k-1]=='B' && str[i-1]=='W'){
            cnt--;
        }
        if(str[i-1]=='B' && str[i+k-1]=='W'){
            cnt++;
        }
        ans=min(ans, cnt);
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