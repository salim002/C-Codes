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
    ll n, m;
    cin>>n>>m;
    if(n==1 && m==1){
        cout<<0<<endl;
        return;
    }
    ll ans=0, x = min(n, m), y = max(n, m);
    if(x==1 && y>2){
        cout<<-1<<endl;
        return;
    }
    ans += 2*(y-1);
    if((y-x)%2==1){
        ans--;
    }
    cout<<ans<<endl;
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