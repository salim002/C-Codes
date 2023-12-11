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
    ll a, b;
    cin>>a>>b;
    ll c = max(a, b);
    ll d = 6-c;
    if(d==5){
        cout<<"1/1"<<endl;
    }
    else if(d==4){
        cout<<"5/6"<<endl;
    }
    else if(d==3){
        cout<<"2/3"<<endl;
    }
    else if(d==2){
        cout<<"1/2"<<endl;
    }
    else if(d==1){
        cout<<"1/3"<<endl;
    }
    else{
        cout<<"1/6"<<endl;
    }
}

int main(){
    fast_io
    solve();
    
    return 0;
}