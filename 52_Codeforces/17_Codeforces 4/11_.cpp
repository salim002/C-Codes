// Code is wrong
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
    ll n, q;
    cin>>n>>q;
    vl v(n);
    for(ll i=0; i<n; i++){
        cin>>v[i];
    }
    while(q--){
        ll l, r;
        cin>>l>>r;
        l--;
        r--;
        if(l==r){
            if(v[l]==0){
                cout<<0<<endl;
            }
            else{
                cout<<-1<<endl;
            }
            continue;
        }
        if(r==l+1){
            if(v[l]==0 && v[r]==0){
                cout<<0<<endl;
            }
            else{
                cout<<-1<<endl;
            }
            continue;
        }
        bool ok=true;
        for(ll i=l; i<=r; i++){
            if(v[i]!=0){
                ok=false;
            }
        }
        if(ok){
            cout<<0<<endl;
            continue;
        }
        ll tmp=v[l];
        for(ll i=l+1; i<=r; i++){
            tmp = tmp^v[i];
        }
        if(tmp==0){
            ll x=r-l+1;
            if(x%2==0){
                cout<<2<<endl;
            }
            else{
                cout<<1<<endl;
            }
        }
        else{
            cout<<-1<<endl;
        }
    }
}

int main(){
    fast_io
    // ll t;
    // cin>>t;
    // while(t--){
    // }
    solve();
    return 0;
}