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
    vector<pair<ll, ll>> v1, v2;
    for(i=0; i<n; i++){
        ll x;
        cin>>x;
        ll cnt=0;
        while(x%m==0){
            cnt++;
            x/=m;
        }
        ll ans=pow(m, cnt);
        if(v1.size()==0){
            v1.push_back({x, ans});
        }
        else{
            ll sz=v1.size()-1;
            if(x==v1[sz].first){
                v1[sz].second+=ans;
            }
            else{
                v1.push_back({x, ans});
            }
        }
    } 
    ll k;
    cin>>k;
    for(i=0; i<k; i++){
        ll x;
        cin>>x;
        ll cnt=0;
        while(x%m==0){
            cnt++;
            x/=m;
        }
        ll ans=pow(m, cnt);
        if(v2.size()==0){
            v2.push_back({x, ans});
        }
        else{
            ll sz=v2.size()-1;
            if(x==v2[sz].first){
                v2[sz].second+=ans;
            }
            else{
                v2.push_back({x, ans});
            }
        }
    } 
    if(v1.size()!=v2.size()){
        cout<<"NO"<<endl;
    }
    else{
        ll ans=0;
        for(ll i=0; i<v1.size(); i++){
            if(v1[i].first!=v2[i].first || v1[i].second!=v2[i].second){
                ans=1;
                break;
            }
        }
        if(ans==1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
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