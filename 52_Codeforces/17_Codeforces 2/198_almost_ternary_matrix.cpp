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

void func(ll a, ll b){
    ll c = b;
    for(ll i=1; i<=a; i+=2){
        if(c==1){
            cout<<1<<" "<<0<<" ";
        }
        else{
            cout<<0<<" "<<1<<" ";
        }
        if(c==1){
            c=0;
        }
        else{
            c=1;
        }
    }
    cout<<endl;
}

void solve(){
    ll n, m, i, j;
    cin>>n>>m;
    ll p=1;
    for(i=1; i<=n; i+=2){
        if(p){
            func(m, 1);
            func(m, 0);
        }
        else{
            func(m, 0);
            func(m, 1);
        }
        if(p==1){
            p=0;
        }
        else{
            p=1;
        }
    }
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