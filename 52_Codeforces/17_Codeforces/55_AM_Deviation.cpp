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
        ll a, b, c;
        cin>>a>>b>>c;
        ll d = abs(a+c-2*b);
        if(d%3==0){
            cout<<0<<endl;
        }
        else{
            cout<<1<<endl;
        }
    }
    
    return 0;
}