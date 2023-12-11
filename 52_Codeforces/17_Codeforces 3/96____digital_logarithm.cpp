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
    vl a(n), b(n);
    for(ll i=0; i<n; i++){
        cin>>a[i];
    }
    for(ll i=0; i<n; i++){
        cin>>b[i];
    }
    priority_queue<ll> pq1(a.begin(), a.end());
    priority_queue<ll> pq2(b.begin(), b.end());
    ll ans=0;
    while(!pq1.empty()){
        if(pq1.top()==pq2.top()){
            pq1.pop();
            pq2.pop();
        }
        else if(pq1.top()>pq2.top()){
            ans++;
            ll tmp = to_string(pq1.top()).size();
            pq1.push(tmp);
            pq1.pop();
        }
        else{
            ans++;
            ll tmp = to_string(pq2.top()).size();
            pq2.push(tmp);
            pq2.pop();
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