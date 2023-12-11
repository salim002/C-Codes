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
    ll n, m, k;
    cin>>n>>m>>k;
    vl v(k);
    for(ll i=0; i<k; i++){
        cin>>v[i];
    }
    priority_queue<ll> pq;
    ll x = n*m-2;
    ll ptr=k;
    bool f=true;
    for(ll i=0; i<k; i++){
        pq.push(v[i]);
        if(pq.size()==x){
            f=false;
            break;
        }
        while(!pq.empty() && pq.top()==ptr){
            pq.pop();
            ptr--;
        }
    }
    if(f){
        cout<<"YA"<<endl;
    }
    else{
        cout<<"TIDAK"<<endl;
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