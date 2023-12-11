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
        ll n, k;
        cin>>n>>k;
        string s;
        cin>>s;
        string rev = "";
        for(ll i=s.size()-1; i>=0; i--){
            rev += s[i];
        }
        if(k==0){
            cout<<1<<endl;
        }
        else if(rev == s){
            cout<<1<<endl;
        }
        else{
            cout<<2<<endl;
        }
    }
    
    return 0;
}