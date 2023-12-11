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

ll ans(vl v, ll x){
    int count = 0;
    map<ll , ll> m;
    for(auto it:v){
        m[it]++;
    }
    sort(v.begin(), v.end());
    for(int i=0; i<v.size(); i++){
        if(m[v[i]]>=1 && m[v[i]*x]>=1){
            m[v[i]]--;
            m[v[i]*x]--;
        }
    }
    for(auto it:m){
        count += it.second;
    }
    return count;
}

int main(){
    ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        ll n, x, i;
        cin>>n>>x;
        vl v(n);
        for(i=0; i<n; i++){
            cin>>v[i];
        }
        cout<<ans(v, x)<<endl;
    }
    return 0;
}