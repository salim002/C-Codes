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
    vl v(n);
    bool eq = false, zero = false;
    ll ze = 0;
    for(i=0; i<n; i++){
        cin>>v[i];
    }
    sort(v.begin(), v.end());
    for(i=0; i<n; i++){
        if(v[i]==0){
            zero = true;
            ze++;
        }
    }
    for(i=0; i<n-1; i++){
        if(v[i]==v[i+1]){
            eq = true;
        }
    }
    if(zero){
        cout<<n-ze<<endl;
        return;
    }
    if(eq){
        cout<<n<<endl;
        return;
    }
    cout<<n+1<<endl;
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