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
    ll n, m, i;
    cin>>n;
    vl v1(n);
    for(i=0; i<n; i++){
        cin>>v1[i];
    }
    cin>>m;
    vl v2(m);
    for(i=0; i<m; i++){
        cin>>v2[i];
    }
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());
    if(v1[n-1]>v2[m-1]){
        cout<<"Alice"<<endl<<"Alice"<<endl;
    }
    else if(v1[n-1]<v2[m-1]){
        cout<<"Bob"<<endl<<"Bob"<<endl;
    }
    else{
        cout<<"Alice"<<endl<<"Bob"<<endl;
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