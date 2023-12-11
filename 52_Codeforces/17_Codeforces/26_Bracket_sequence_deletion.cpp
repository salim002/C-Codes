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
    ll n, i,count = 0, r=0;
    cin>>n;
    string s, temp = "";
    cin>>s;
    for(i=0; i<n; i++){
        temp += s[i];
        if(temp == "((" || temp=="()" || temp=="))"){
            count++;
            r+=2;
            temp = "";
        }
        else if(temp.size()>1){
            while(s[i] != ')' && i<n){
                temp += s[i];
                i++;
            }
            if(i<n){
                count++;
                r += temp.size();
                temp = "";
            }
        }
    }
    cout<<count<<" "<<n-r<<endl;
        
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