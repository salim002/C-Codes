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
    ll n, m, i;
    cin>>n>>m;
    vl v(m), a(n);
    for(i=0; i<m; i++){
        ll x;
        cin>>x;
        x--;
        a[x]++;
    }
    // for(auto it:p){
    //     cout<<it<<" ";
    // }
    // cout<<endl;
    ll l=0, r=m;
    while(l<r){
        ll x=(l+r)/2;
        ll time=0, work=0;
        for(i=0; i<n; i++){
            if(a[i]<=x){
                time+=(x-a[i])/2;
            }
            else{
                work+=(a[i]-x);
            }
        }
        if(time>=work){
            r=x;
        }
        else{
            l=x+1;
        }
    }
    cout<<l<<endl;
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