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
        ll n, i, num, max=0, min = INT_MAX;
        cin>>n;
        for(i=0; i<n; i++){
            cin>>num;
            if(num>max){
                max = num;
            }
            if(num<min){
                min = num;
            }
        }
        cout<<max-min<<endl;
    }
    return 0;
}