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
    vl v(3);
    for(int i=0; i<3; i++){
        cin>>v[i];
    }
    sort(v.begin(), v.end());
    if(v[0]==v[1] && v[2]%2==0){
        cout<<"YES"<<endl;
        return;
    }
    if(v[1]==v[2] && v[0]%2==0){
        cout<<"YES"<<endl;
        return;
    }
    if(v[0] + v[1] == v[2]){
        cout<<"YES"<<endl;
        return;
    }
    cout<<"NO"<<endl;
    
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