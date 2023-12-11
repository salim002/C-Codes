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
    for(i=0; i<n; i++){
        cin>>v[i];
    }
    set<ll> st;
    ll type = 0;
    for(i=0; i<n; i++){
        if(st.find(v[i]) == st.end()){
            type++;
        }
        st.insert(v[i]);
    }
    for(i=1; i<=n; i++){
        if(i<=type){
            cout<<type<<" ";
        }
        else{
            cout<<i<<" ";
        }
    }
    cout<<endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}