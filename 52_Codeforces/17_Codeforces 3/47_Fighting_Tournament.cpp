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
    ll n, q, i;
    cin>>n>>q;
    vl v(n);
    ll maxPos;
    for(i=0; i<n; i++){
        cin>>v[i];
        if(v[i]==n){
            maxPos=i;
        }
    }
    map<ll, pair<ll, ll>> mp;
    ll l=0, r=1;
    ll round=1;
    while(r<n){
        if(v[r]>v[l]){
            l=r;
            mp[r].first++;
            mp[r].second=round;
        }
        else{
            mp[l].first++;
            mp[l].second=round;
        }
        r++;
        round++;
    }
    while(q--){
        ll p, r;
        cin>>p>>r;
        p--;
        if(mp[p].first==0){
            cout<<0<<endl;
            continue;
        }
        ll req = mp[p].second;
        if(r>req){
            if(p==maxPos){
                cout<<mp[p].first+r-req<<endl;
            }
            else{
                cout<<mp[p].first<<endl;
            }
        }
        else{
            cout<<max(0ll, mp[p].first-(mp[p].second-r))<<endl;
        }
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