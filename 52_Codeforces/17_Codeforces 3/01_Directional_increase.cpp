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
    vl v(n+1), p(n+1, 0);
    for(i=1; i<=n; i++){
        cin>>v[i];
        p[i] = p[i-1]+v[i];
    }
    if(p[n]!=0){
        cout<<"NO"<<endl;
        return;
    }
    bool z=false;
    for(i=1; i<=n; i++){
        if(p[i]<0){
            cout<<"NO"<<endl;
            return;
        }
        else if(p[i]==0){
            z=true;
        }
        else if(z){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
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