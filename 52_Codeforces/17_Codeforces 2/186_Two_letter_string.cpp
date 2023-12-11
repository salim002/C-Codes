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
    vector<string> v(n), p;
    map<string, ll> m;
    map<char, ll> m1, m2;
    for(i=0; i<n; i++){
        cin>>v[i];
        m[v[i]]++;
        m1[v[i][0]]++;
        m2[v[i][1]]++;
    }
    ll ans=0;
    for(i=0; i<n; i++){
        ll temp=max((ll)0, m1[v[i][0]]-m[v[i]]);
        ans+=temp;
        temp=max((ll)0, m2[v[i][1]]-m[v[i]]);
        ans+=temp;
        if(m1[v[i][0]]>0){
            m1[v[i][0]]--;
        }
        if(m2[v[i][1]]>0){
            m2[v[i][1]]--;
        }
        if(m[v[i]]>0){
            m[v[i]]--;
        }
    }
    cout<<ans<<endl;
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