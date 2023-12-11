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
    ll n, i;
    cin>>n;
    vl a(n+1), b(n+1), p, q;
    for(i=1; i<=n; i++){
        cin>>a[i];
    }
    for(i=1; i<=n; i++){
        cin>>b[i];
        if(b[i]>=a[i]){
            p.push_back(b[i]-a[i]);
        }
        else{
            q.push_back(a[i]-b[i]);
        }
    }
    if(q.empty()){
        cout<<n/2<<endl;
        return;
    }
    if(p.empty()){
        cout<<0<<endl;
        return;
    }
    sort(all(p));
    sort(all(q));
    ll ans=0, k=p.size()-1;
    for(i=q.size()-1; i>=0; i--){
        if(k<0){
            break;
        }
        else{
            if(p[k]>=q[i]){
                ans++;
                k--;
            }
        }
    }
    ans+=(k+1)/2;
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