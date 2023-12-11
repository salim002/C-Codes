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
    vl v(n);
    ll ans=0;
    for(i=0; i < n; i++){
        cin>>v[i];
        if(v[i]%2==1){
            ans++;
        }
    }
    if(ans>0){
        cout<<n-ans<<endl;
        return;
    }
    ans=0;
    if(n==1){
        while(v[0] % 2 == 0){
            v[0] /= 2;
            ans++;
        }
        cout<<ans<<endl;
    }
    else{
        for(i = 0; i < n; i++){
            ll temp=0;
            while (v[i] % 2==0){
                v[i] /= 2;
                temp++;
            }
            v[i]=temp;
        }
        ll ans =(*min_element(all(v)));
        cout<<n+ans-1<<endl;
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