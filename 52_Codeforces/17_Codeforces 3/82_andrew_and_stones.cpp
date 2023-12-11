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
    vl v(n);
    ll e=0, o=0;
    for(i=0; i<n; i++){
        cin>>v[i];
        if(i>0 && i<n-1){
            if(v[i]==1)
            if(v[i]%2==0 && v[i]>0){
                e+=v[i]/2;
            }
            else if(v[i]%2==1){
                o++;
            }
        }
    }
    if(n==3){
        if(v[1]%2==1){
            cout<<-1<<endl;
            return;
        }
    }
    bool flag=true;
    for(i=1; i<n-1; i++){
        if(v[i]>1){
            flag=false;
        }
    }
    if(flag){
        cout<<-1<<endl;
        return;
    }
    ll ans=0;
    for(i=1; i<n-1; i++){
        ans+=(v[i]+1)/2;
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