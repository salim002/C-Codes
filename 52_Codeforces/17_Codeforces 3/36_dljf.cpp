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
    vl v;
    for(i=0; i<n; i++){
        v.push_back(i+1);
    }
    cout<<n<<endl;
    for(auto it:v){
        cout<<it<<" ";
    }
    cout<<endl;
    swap(v[0], v[n-1]);
    for(auto it:v){
        cout<<it<<" ";
    }
    cout<<endl;
    for(i=n-2; i>0; i--){
        swap(v[i], v[i+1]);
        for(auto it:v){
            cout<<it<<" ";
        }
        cout<<endl;
    }
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