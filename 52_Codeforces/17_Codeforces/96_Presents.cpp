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

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, i;
    cin>>n;
    vl v(n+1), ans(n+1);
    for(i=1; i<=n; i++){
        cin>>v[i];
        ans[v[i]] = i;

    }
    for(i=1; i<=n; i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;

    return 0;
}