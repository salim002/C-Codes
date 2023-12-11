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
    priority_queue<ll> p;
    multiset<ll> st1;
    for(i=0; i<n; i++){
        cin>>v[i];
        // p.push(v[i]);
        st1.insert(v[i]);
    }
    ll ans=0;
    if(n==1){
        if(v[0]<=1){
            cout<<1<<endl;
        }
        else{
            cout<<0<<endl;
        }
        return;
    }
    ll l=0, r=n;
    while(l<=r){
        bool ok=true;
        multiset<ll> st2;
        st2=st1;
        ll mid=l+(r-l)/2;
        for(i=1; i<=mid; i++){
            auto it = st2.upper_bound(mid+1-i);
            if(it!=st2.begin()){   
                it--;
                st2.erase(st2.find(*it));
                auto it2 = st2.begin();
                st2.insert(mid+*it2+i-1);
                st2.erase(st2.find(*it2));
            }
            else{
                ok=false;
                break;
            }
        }
        if(ok==false){
            r=mid-1;
        }
        else{
            l=mid+1;
            ans=mid;
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