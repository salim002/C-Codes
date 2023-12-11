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
    ll x1, x2, x3, y1, y2, y3;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    if(y1==0 && y2==0 || y2==0 && y3==0 || y3==0 && y1==0){
        cout<<0<<endl;
        return;
    }
    if(y2==y1){
        if(y3<y1){
            cout<<abs(x2-x1)<<endl;
            return;
        }
    }  
    if(y3==y2){
        if(y1<y3){
            cout<<abs(x3-x2)<<endl;
            return;
        }
    }  
    if(y3==y1){
        if(y2<y3){
            cout<<abs(x3-x1)<<endl;
            return;
        }
    } 
    cout<<0<<endl;
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