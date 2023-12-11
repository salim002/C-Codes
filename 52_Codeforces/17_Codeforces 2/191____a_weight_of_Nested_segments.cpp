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
    cout<<endl;
    ll n, m, i;
    cin>>n>>m;
    vector<pair<ll, ll>> v(m), v2(m);
    map<ll, ll> mpp;
    for(i=0; i<m; i++){
        cin>>v[i].first>>v[i].second;
        mpp[v[i].first] = i+1;
    }
    sort(v.begin(), v.end(), [&](pair<ll, ll> a, pair<ll, ll> b){
        return a.second<b.second;
    });
    ll sum=0;
    for(i=0; i<m; i++){
        if(i<2*n){
            sum+=v[i].second;
        }
        else{
            v.pop_back();
        }
    }
    sort(v.begin(), v.end());
    vl p(v.size());
    for(i=0; i<v.size(); i++){
        p[i] = v[i].first;
    }
    // for(auto it:p){
    //     cout<<it<<" ";
    // }
    // cout<<endl;
    cout<<sum<<endl;
    for(i=0; i<n; i++){
        cout<<mpp[p[i]]<<" "<<mpp[p[2*n-1-i]]<<endl;
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