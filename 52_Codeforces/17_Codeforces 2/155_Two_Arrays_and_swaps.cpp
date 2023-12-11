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
    ll n, k, i;
    cin>>n>>k;
    vl a(n), b(n);
    for(i=0; i<n; i++){
        cin>>a[i];
    }
    for(i=0; i<n; i++){
        cin>>b[i];
    }
    sort(all(a));
    sort(b.rbegin(), b.rend());
    ll cnt=0;
    if(k!=0){
        for(i=0; i<n; i++){
            if(cnt<k){
                if(a[i]<b[i]){
                    swap(a[i], b[i]);
                    cnt++;
                }
            }
            else{
                break;
            }
        }
    }
    ll ans=0;
    for(i=0; i<n; i++){
        // cout<<a[i]<<" ";
        ans+=a[i];
    }
    // cout<<endl;
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