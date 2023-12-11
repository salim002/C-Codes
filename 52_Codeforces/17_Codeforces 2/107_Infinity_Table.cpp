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
    ll count = 1, i=0;
    while(count<=n){
        i++;
        count = i*i;
        count = i*i;
        if(count==n){
            i--;
            break;
        }
        else if(count>n){
            i--;
            break;
        }
    }
    count = i*i;
    ll a = 1, b = i+1;
    for(ll j=count+1; j<=(i+1)*(i+1); j++){
        if(j==n){
            cout<<a<<" "<<b<<endl;
            break;
        }
        else{
            if(a>=i+1){
                b--;
            }
            if(a<(i+1)){
                a++;
            }
        }
    }
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