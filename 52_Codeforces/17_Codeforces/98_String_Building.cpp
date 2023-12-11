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
    string s;
    cin>>s;
    if(s.size()==1){
        cout<<"NO"<<endl;
        return;
    }
    for(ll i=0; i<s.size(); i++){
        if(s[i]=='a'){
            if(s[i+1] != 'a' && s[i-1] != 'a'){
                cout<<"NO"<<endl;
                return;
            }
        }
        else{
            if(s[i+1] != 'b' && s[i-1] != 'b'){
                cout<<"NO"<<endl;
                return;
            }
        }
    }
    cout<<"YES"<<endl;
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