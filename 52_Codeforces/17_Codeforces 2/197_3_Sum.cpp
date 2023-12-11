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
        vl v;
    map<ll, ll> m;
    for(i=0; i<n; i++){
        ll a;
        cin>>a;
        a=a%10;
        m[a]++;
        if(m[a]<=3){
            v.push_back(a);
        }
    }
    // for(auto it:v){
    //     cout<<it<<" ";
    // }
    // cout<<endl;
    for(i=0; i<v.size(); i++){
        for(ll j=i+1; j<v.size(); j++){
            for(ll k=j+1; k<v.size(); k++){
                ll sum = v[i]+v[j]+v[k];
                if(sum%10==3){
                    cout<<"YES"<<endl;
                    return;
                }
            }
        }
    }
    cout<<"NO"<<endl;
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