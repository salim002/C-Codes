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
    vl v(n);
    ll cnt=0, l=0, r=0, p=1;
    for(i=0; i<n; i++){
        cin>>v[i];
        if(v[i]==1){
            p=0;
        }
        if(v[i]==0 && p==1){
            l++;
        }
        if(v[i]==1){
            cnt++;
        }
    }
    for(i=n-1; i>=0; i--){
        if(v[i]==1){
            break;
        }
        if(v[i]==0){
            r++;
        }
    }
    cout<<n-cnt-l-r<<endl;
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