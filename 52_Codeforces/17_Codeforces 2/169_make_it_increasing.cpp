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
    vl a(n);
    for(i=0; i<n; i++){
        cin>>a[i];
    }
    ll ans=0;
    for(i=0; i<n-1; i++){
        while(a[i]!=0 && a[i]>=a[i+1]){
            a[i] /= 2;
            ans++;
        }
        if(a[i]>=a[i+1] || (a[i]==0 && i>0)){
            ans=-1;
            break;
        }
    }
    cout<<ans<<endl;
}

int main(){
    fast_io
    solve();
    return 0;
}