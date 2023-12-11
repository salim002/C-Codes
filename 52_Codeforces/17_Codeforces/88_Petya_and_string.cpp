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
    string s1, s2;
    cin>>s1>>s2;
    for(ll i=0; i<s1.size(); i++){
        s1[i] = tolower(s1[i]);
        s2[i] = tolower(s2[i]);
        if(s1[i]<s2[i]){
            cout<<-1<<endl;
            return;
        }
        else if(s1[i]>s2[i]){
            cout<<1<<endl;
            return;
        }
        else{
            continue;
        }
    }
    cout<<0<<endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}