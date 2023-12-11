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
    string s1, s2;
    cin>>s1>>s2;
    ll ans=0;
    map<ll, bool> m;
    for(i=0; i<n; i++){
        m[i]=false;
    }
    for(i=0; i<n; i++){
        if(s2[i]=='1'){
            if(i!=0 && s1[i-1]=='1' && !m[i-1]){
                ans++;
                m[i-1]=true;
            }
            else if(s1[i]=='0'){
                ans++;
            }
            else if(i+1<n && s1[i+1]=='1'){
                ans++;
                m[i+1]=true;
            }
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