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
    ll n, i;
    string s;
    cin>>n>>s;
    for(i=0; i<n; i++){
        if(s[i]=='L' || s[i]=='R'){
            cout<<s[i];
        }
        else{
            if(s[i]=='U'){
                cout<<"D";
            }
            else{
                cout<<"U";
            }
        }
    }
    cout<<endl;
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