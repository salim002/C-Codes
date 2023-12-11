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
    ll n, i;
    cin>>n;
    vl v(n);
    bool f=false;
    for(i=0; i<n; i++){
        cin>>v[i];
        if(i>0){
            if(v[i]!=v[i-1]){
                f=true;
            }
        }
    }
    if(f){
        cout<<"NO"<<endl;
        return;
    }
    sort(all(v));
    ll k=v[n-1];
    for(i=0; i<n; i++){
        if(v[i]%10==0){
            cout<<"NO"<<endl;
            return;
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