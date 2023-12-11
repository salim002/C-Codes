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
    ll n, k;
    cin>>n>>k;
    string s; 
    cin>>s;
    vl a(n), b(n);
    ll ptr=1e9;
    for(int i=0; i<n; i++){
        if(s[i]=='1'){
            a[i]=0;
            ptr=1;
        }
        else{
            a[i]=ptr;
            ptr++;
        }
    }
    ptr=1e9;
    for(int i=n-1; i>=0; i--){
        if(s[i]=='1'){
            b[i]=0;
            ptr=1;
        }
        else{
            b[i]=ptr;
            ptr++;
        }
    }
    int ans=0;
    for(int i=0; i<n; i++){
        if(a[i]>k && b[i]>k){
            ans++;
            if(i+1<n){
                if(s[i+1]=='1'){
                    a[i+1]=0;
                }
                else{
                    a[i+1]=1;
                }
            }
        }
        else{
            if(i+1<n){
                if(s[i+1]=='1'){
                    a[i+1]=0;
                }
                else{
                    a[i+1]=a[i]+1;
                }
            }
        }
    }
    // for(auto it:a){
    //     cout<<it<<" ";
    // }
    // cout<<endl;
    // for(auto it:b){
    //     cout<<it<<" ";
    // }
    // cout<<endl;
    cout<<ans<<'\n';
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