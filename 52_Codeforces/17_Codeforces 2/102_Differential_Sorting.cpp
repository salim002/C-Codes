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
    vl v(n+3), temp;
    for(i=1; i<=n; i++){
        cin>>v[i];
        temp.push_back(v[i]);
    }
    if(is_sorted(temp.begin(), temp.end())){
        cout<<0<<endl;
        return;
    }
    if(v[n-1]==v[n]){
        cout<<n-2<<endl;
        for(i=1; i<=n-2; i++){
            cout<<i<<" "<<n-1<<" "<<n<<endl;
        }
    }
    else if(v[n-1]<v[n] && v[n]>=0){
        cout<<n-2<<endl;
        for(i=1; i<=n-2; i++){
            cout<<i<<" "<<n-1<<" "<<n<<endl;
        }
        
    }
    else{
        cout<<-1<<endl;
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