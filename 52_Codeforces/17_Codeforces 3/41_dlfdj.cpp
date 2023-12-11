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

int main(){
    fast_io
    vl v;
    for(ll i=0; i<=1e5; i++){
        v.push_back(i*i);
    }
    ll t;
    cin>>t;
    while(t--){
        ll n, i;
        cin>>n;
        vl p, q;
        for(i=0; i<n; i++){
            p.push_back(i);
        }
        q=p;
        i=n-1;
        while(i>=0){
            ll a = *lower_bound(all(v), p[i]);
            ll b=a-p[i];
            reverse(q.begin()+b, q.begin()+p[i]+1);
            i=b-1;
        }
        // for(auto it:v){
        //     cout<<it<<" ";
        // }
        // cout<<endl;
        for(auto it:q){
            cout<<it<<" ";
        }
        cout<<endl;
    }
    return 0;
}