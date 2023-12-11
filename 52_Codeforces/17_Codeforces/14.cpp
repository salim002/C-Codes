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

void wrong_or_right(ll n){
    vi v;
    ll limit = 1, count=0;
    while(limit<1e9 && count < n){
        v.pb(limit);
        limit *= 3;
        count++;
    }
    if(count == n){
        cout<<"YES"<<endl;
        for(auto it:v){
            cout<<it<<" ";
        }
    }
    else{
        cout<<"NO"<<endl;
    }
    cout<<endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        wrong_or_right(n);
    }
    
    return 0;
}