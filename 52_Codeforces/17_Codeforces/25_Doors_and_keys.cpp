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
    set<char> st;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='r'|| s[i]=='g' || s[i]=='b'){
            st.insert(s[i]);
        }
        else{
           if(s[i]=='R'){
               if(st.find('r') == st.end()){
                    cout<<"NO"<<endl;
                    return;
                }
           }
           if(s[i]=='G'){
               if(st.find('g') == st.end()){
                    cout<<"NO"<<endl;
                    return;
                }
           }
           if(s[i]=='B'){
               if(st.find('b') == st.end()){
                    cout<<"NO"<<endl;
                    return;
                }
           }
        }
    }
    cout<<"YES"<<endl;
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