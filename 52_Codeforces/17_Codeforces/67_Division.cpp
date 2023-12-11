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
    ll r;
    cin>>r;
    if(r>=1900){
        cout<<"Division 1"<<endl;
    }
    else if(r>=1600 && r<1900){
        cout<<"Division 2"<<endl;
    }
    else if(r>=1400 && r<1600){
        cout<<"Division 3"<<endl;
    }
    else{
        cout<<"Division 4"<<endl;
    }
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