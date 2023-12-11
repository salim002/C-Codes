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
    for(i=0; i<n; i++){
        cin>>v[i];
    }
    if(n==1){
        cout<<-1<<endl;
        return;
    }
    vl a = v;
    sort(all(a));
    for(i=0; i<n-1; i++){
        if(a[i]==v[i]){
            swap(a[i], a[i+1]);
        }
    }
    if(a[n-1]==v[n-1]){
        swap(a[n-1], a[n-2]);
    }
    for(auto it:a){
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