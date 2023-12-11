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
    ll n, l, r, i;
    cin>>n>>l>>r;
    vl v(n);
    for(i=1; i<=n; i++){
        if(r%i==0){
            v[i-1]=r;
        }
        else{
            ll tmp=r-r%i;
            if(tmp<l){
                cout<<"NO"<<endl;
                return;
            }
            v[i-1]=tmp;
        }
    }
    cout<<"YES"<<endl;
    for(auto it:v){
        cout<<it<<" ";
    }
    cout<<endl;
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