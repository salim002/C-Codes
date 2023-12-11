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
    ll n, s, i, j;
    cin>>n>>s;
    vl v(n);
    ll sum=0, cnt=0;
    vector<pair<ll, ll>> p;
    p.push_back(make_pair(0, -1));
    for(i=0; i<n; i++){
        cin>>v[i];
        sum+=v[i];
        if(v[i]==1){
            p.push_back(make_pair(sum, i));
        }
        if(sum>=s){
            ll x=sum-s;
            pair<ll, ll> y=make_pair(x, -5);
            auto it=lower_bound(p.begin(), p.end(), y);
            ll z = i-(*it).second;
            cnt=max(cnt, z);
        }
    }    
    if(sum<s){
        cout<<-1<<endl;
    } 
    else if(sum==s){
        cout<<0<<endl;
    }
    else{
        cout<<n-cnt<<endl;
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