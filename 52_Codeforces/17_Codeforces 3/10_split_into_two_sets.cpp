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
    vector<pair<ll, ll>> v;
    map<ll, ll> m, m1, m2;
    ll a, b;
    bool flag=true;
    set<pair<ll, ll>> st;
    for(i=0; i<n; i++){
        cin>>a>>b;
        if(a==b){
            flag=false;
        }
        m[a]++;
        m[b]++;
        if(st.find({a, b})!=st.end()){
            flag=false;
        }
        if(m1.find(a)!=m1.end()){
            st.insert({m1[a], b});
            st.insert({b, m1[a]});
            if(m2[m1[a]]==b){
                flag=false;
            }
        }
        m1[a]=b;
        if(m2.find(b)!=m2.end()){
            st.insert({m2[b], a});
            st.insert({a, m2[b]});
            if(m1[m2[b]]==a){
                flag=false;
            }
        }
        m2[b]=a;
        // v.push_back({a, b});
    }
    for(auto it:m){
        if(it.second>2){
            flag=false;
        }
    }
    if(flag){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
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