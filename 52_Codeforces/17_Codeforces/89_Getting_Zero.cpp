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

vl ans(32770);

void solve(){
    ll n;
    cin>>n;
    for(int i=1; i<=n; i++){
        cin>>ans[i];
    }
    ans[0] = 0;
    for(int i=1; i<=32768; i++){
        ll temp = 32768-i;
        ll n = i;
        ll count=0;
        while(n != 0){
            n = (2*n)%32768;
            count++;
        }
        ans[i] = min(temp, count);
        for(int j=max(0, i-16); j<=i-1; j++){
            ans[j] = min(ans[j], ans[i]+(i-j));
        }
    }
    for(int i=1; i<=n; i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}