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
    vl v(n);
    map<ll, bool> m;
    for(i=0; i<n; i++){
        cin>>v[i];
    }
    sort(all(v));
    // reverse(all(v));
    for(i=0; i<n; i++){
        m[i]=true;
    }
    ll ans=0, r=0;
    vl temp;
    for(i=0; i<n; i++){
        ans+=v[i]/k;
        temp.push_back(v[i]%k);
    }
    sort(all(temp));
    ll a=0, b=n-1;
    while(a<b){
        if(temp[a]+temp[b]>=k){
            ans++;
            a++;
            b--;
        }
        else{
            a++;
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