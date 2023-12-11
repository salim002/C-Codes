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
    ll t;
    cin>>t;
    while(t--){
        vl v(7);
        for(int i=0; i<7; i++){
            cin>>v[i];
        }
        sort(v.begin(), v.end());
        ll a = v[0];
        ll b = v[1];
        ll c = v[6]-a-b;
        cout<<a<<" "<<b<<" "<<c<<endl;
    }
    return 0;
}