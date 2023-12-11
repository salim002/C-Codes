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
#define all(x) x.begin(), x.end()
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

ll fac(ll n){
    ll res=1;
    for(ll i=2; i<=n; i++){
        res*=i;
    }
    return res;
}

ll nCr(ll n, ll r){
    return fac(n)/(fac(r) * fac(n-r));
}

bool isPowerOfTwo(ll n){
    return n && (!(n&(n-1)));
}

void solve(){
    ll n;
    cin>>n;
    vl v(n);
    priority_queue<ll> p;
    ll sum=0;
    for(ll i=0; i<n; i++){
        cin>>v[i];
        sum+=v[i];
    }
    multiset<ll> st(v.begin(), v.end());
    p.push(sum);
    while(!p.empty()){
        ll k=p.top();
        if(k<*--st.end()){
            cout<<"NO"<<endl;
            return;
        }
        p.pop();
        if(st.find(k)!=st.end()){
            st.erase(st.find(k));
        }
        else{
            ll a=k/2, b=(k+1/2);
            p.push(k/2);
            p.push((k+1)/2);
        }
    }
    cout<<"YES"<<endl;
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