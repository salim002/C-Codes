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
#define pb push_back
#define all(x) x.begin(), x.end()
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

const int mod = 1000000007;
const ll M = 998244353;

ll mul(ll a, ll b){
    return ((a%M)*(b%M))%M;
}

ll modPower(ll a, ll b){
    if(b==0){
        return 1;
    }
    a = a%M;
    ll res=1;
    while(b>0){
        if(b&1){
            res = mul(res, a);
        }
        b = b>>1;
        a = mul(a, a);
    }
    return res;
}

ll fac(ll n){
    ll res=1;
    for(ll i=2; i<=n; i++){
        res = mul(res, i);
    }
    return res;
}

ll dv(ll a, ll b){
    return mul(a, modPower(b, M-2));
}

ll nCr(ll n, ll r){
    return dv(fac(n), mul(fac(r), fac(n-r)));
}

void solve(){
    ll n;
    cin>>n;
    vl v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    if(n==1){
        cout<<"NO"<<'\n';
        return;
    }
    sort(all(v));
    ll mx=v[n-1], mn=v[0];
    ll diff=mx-mn;
    vl a, b;
    for(int i=0; i<n; i++){
        if(v[i]<0){
            a.push_back(v[i]);
        }
        else{
            b.push_back(v[i]);
        }
    }
    vl ans;
    ll l=0, r=0, sum=0;
    while(l<a.size() && r<b.size()){
        if(sum<0){
            ans.push_back(b[r]);
            sum+=b[r];
            r++;
        }
        else{
            ans.push_back(a[l]);
            sum+=a[l];
            l++;
        }
        if(abs(sum)>=diff){
            cout<<"NO"<<'\n';
            return;
        }
    }
    while(l<a.size()){
        ans.push_back(a[l]);
        l++;
    }
    while(r<b.size()){
        ans.push_back(b[r]);
        r++;
    }
    ll x=accumulate(all(a), 0);
    ll y=accumulate(all(b), 0);
    if(abs(x)-abs(y)>=diff){
        cout<<"NO"<<'\n';
        return;
    }
    cout<<"YES"<<'\n';
    for(auto it:ans){
        cout<<it<<" ";
    }
    cout<<endl;
}

int main(){
    fast_io
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}