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
ll n,on,m,x,sm=0,sy=0;
    cin>>n;
    on=n;
    ll index,index2;
    vector<int> a(n);
    vector<int> b(n);
    // fl(i,0,n)
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<n; i++){
        cin>>b[i];
    }
    // fl(i,0,n)
    // cin>>b[i];
    sort(all(a),greater<int>());
    sort(all(b),greater<int>());
    for(int i=0; i<n; i++)
    {
        if(i==0)
        a[i]=a[i];
        else
        a[i]+=a[i-1];
    }
    for(int i=0; i<n; i++)
    {
        if(i==0)
        b[i]=b[i];
        else
        b[i]+=b[i-1];
    }
    x=n/4;
    x=n-x;
    ll y=x;
    x-=1;
    y-=1;
    sm=0;
    sy=0;
    if(sm+a[x]>=b[y])
    cout<<"0\n";
    else
    {
        while(sm+a[x]<b[y])
        {
            sm+=100;
            n++;
            if(n%4==0)
            {
                x--;
            }
            else
            {
                if(y!=on-1)
                y++;
            }
            // cout<<"sm"<<sm<<"\n";
            // cout<<"a"<<a[x]<<"\n";
            // cout<<"b"<<b[y]<<"\n";
            // cout<<"x"<<x<<"\n";
            // cout<<"y"<<y<<"\n";
        }
        cout<<n-on<<"\n";
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