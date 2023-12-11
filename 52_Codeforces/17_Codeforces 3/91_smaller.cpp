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
    ll q;
    cin>>q;
    string s1="a", s2="a";
    ll cnt1=1, cnt2=1;
    bool f=false;
    bool ok=false;
    while(q--){
        ll d, k;
        string s;
        cin>>d>>k>>s;
        if(d==1){
            for(auto it:s){
                if(it=='a'){
                    cnt1+=k;
                }
                else{
                    f=true;
                }
            }
        }
        else{
            for(auto it:s){
                if(it!='a'){
                    ok=true;
                }
                cnt2+=k;
            }
        }
        if(ok){
            cout<<"YES"<<endl;
            continue;
        }
        if(cnt1<cnt2 && !f){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
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