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
// const int mod = 998244353;
#define all(x) x.begin(), x.end()
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve(){
    ll n, i;
    cin>>n;
    cout<<2<<endl;
    vl v;
    map<ll, bool> m;
    for(i=1; i<=n; i++){
        m[i]=true;
    }
    ll a=1;
    while(a<=n){
        if(m[a]==false){
            a++;
            continue;
        }
        v.push_back(a);
        m[a]=false;
        ll b=2*a;
        while(b<=n){
            if(m[b]){
                v.push_back(b);
            }
            m[b]=false;
            b*=2;
        }
        a++;
    }
    for(auto it:v){
        cout<<it<<" ";
    }
    cout<<endl;
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