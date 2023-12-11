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
    // cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        ll l, r, a, ans;
        cin>>l>>r>>a;
        if(l/a==r/a){
            ans = r/a+r%a;
        }
        else{
            ans = max(r/a+r%a, r/a-1+a-1);
        }
        cout<<ans<<endl;
    }
    
    return 0;
}