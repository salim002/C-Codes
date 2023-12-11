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

void remove_prefixes(string s){
    map<char, int> m;
    int start = 0;
    for(int i=0; i<s.size(); i++){
        m[s[i]]++;
    }
    for(int i=0; i<s.size(); i++){
        if(m[s[i]]==1){
            cout<<s.substr(start)<<endl;
            return;
        }
        start++;
        m[s[i]]--;
    }

}

int main(){
    ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        remove_prefixes(s);
    }
    return 0;
}