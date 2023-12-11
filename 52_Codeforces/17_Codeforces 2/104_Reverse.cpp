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
    ll n, i, j;
    cin>>n;
    vl v(n+1);
    for(i=1; i<=n; i++){
        cin>>v[i];
    }
    ll idx = n+1, val;
    vl v1;
    for(i=1; i<=n; i++){
        if(v[i]==i){
            v1.push_back(v[i]);
        }
        else{
            idx = i;
            val = i;
            break;
        }
    }
    for(i=idx+1; i<=n; i++){
        if(v[i]==val){
            for(j=i; j>=idx; j--){
                v1.push_back(v[j]);
            }
            for(j=i+1; j<=n; j++){
                v1.push_back(v[j]);
            }
            break;
        }
    }
    for(auto it:v1){
        cout<<it<<" ";
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