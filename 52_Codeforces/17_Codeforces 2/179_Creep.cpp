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
#define all(x) x.begin(), x.end()
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve(){
    ll a, b, i;
    cin>>a>>b;
    string s="";
    ll mn=min(a, b);
    for(i=0; i<mn; i++){
        s+="01";
    }
    ll d=abs(a-b);
    for(i=0; i<d; i++){
        if(a>b){
            s+='0';
        }
        else{
            s+='1';
        }
    }
    cout<<s<<endl;
}

int main(){
    fast_io
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}