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
        string s;
        cin>>s;
        ll n = s.size();
        if(s[0]==s[n-1]){
            cout<<s<<endl;
        }
        else if(s[0]=='a'){
            s[n-1] = 'a';
            cout<<s<<endl;
        }
        else{
            s[n-1] = 'b';
            cout<<s<<endl;
        }
    }
    
    return 0;
}