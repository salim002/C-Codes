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
    ll x, y;
    cin>>x>>y;
    if(x>y){
        cout<<0<<" "<<0<<endl;
    }
    else if(x==y){
        cout<<1<<" "<<1<<endl;
    }
    else{
        if(y%x==0){
            ll c = y/x;
            cout<<1<<" "<<c<<endl;
        }
        else{
            cout<<0<<" "<<0<<endl;
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