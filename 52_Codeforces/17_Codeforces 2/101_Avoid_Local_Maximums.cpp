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
    ll n, i;
    cin>>n;
    vl v(n+1);
    for(i=0; i<n; i++){
        cin>>v[i];
    }
    ll ans=0;
    for(i=1; i<n-1; i++){
        if(v[i]>v[i-1] && v[i]>v[i+1]){
            ans++;
            if(v[i+2]==max(v[i], max(v[i+1], v[i+2]))){
                v[i+1]=v[i+2];
            }
            else if(v[i]>v[i+1]){
                v[i+1]=v[i];
            }
            else{
                v[i] = v[i+1];
            }
        }
    }
    cout<<ans<<endl;
    for(i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
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