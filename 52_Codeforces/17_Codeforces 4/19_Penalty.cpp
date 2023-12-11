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
    string s;
    cin>>s;
    ll a1=0, b1=0, k1=5, k2=5;
    ll cnt1=10, cnt2=10;
    for(ll i=0; i<10; i++){
        if(i%2==0){
            if(s[i]=='1' || s[i]=='?'){
                a1++;
            }
            if(a1-b1>k2){
                cnt1=i+1;
                break;
            }
        }
        else{
            if(s[i]=='1'){
                b1++;
            }
            k2 = 5 - (i/2+1);
            if(a1-b1>k2){
                cnt1 = i+1;
                break;
            }
        }
    }
    a1=0;
    b1=0;
    for(ll i=0; i<10; i++){
        if(i%2==0){
            if(s[i]=='1'){
                a1++;
            }
            k1 = 5 - (i/2+1);
            if(b1-a1>k1){
                cnt2=i+1;
                break;
            }
        }
        else{
            if(s[i]=='1' || s[i]=='?'){
                b1++;
            }
            if(b1-a1>k1){
                cnt2 = i+1;
                break;
            }
        }
    }
    cout<<min(cnt1, cnt2)<<endl;
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