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
    ll n;
    cin>>n;
    if(n%7 == 0){
        cout<<n<<endl;
        return;
    }
    else{
        ll a = n%7;
        ll b = n%10;
        if(b+(7-a)<=9){
            cout<<n+(7-a)<<endl;
        }
        else{
            cout<<n-a<<endl;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}