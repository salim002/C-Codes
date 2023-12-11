// Code is wrong

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
#define all(x) x.begin(), x.end()
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

ll fac(ll n){
    ll res=1;
    for(ll i=2; i<=n; i++){
        res*=i;
    }
    return res;
}

ll nCr(ll n, ll r){
    return fac(n)/(fac(r) * fac(n-r));
}

bool isPowerOfTwo(ll n){
    return n && (!(n&(n-1)));
}

void solve(){
    ll n;
    cin>>n;
    vl v(n+1);
    ll sum=0;
    for(ll i=1; i<=n; i++){
        cin>>v[i];
        sum+=v[i];
    }
    if(sum%2==1){
        cout<<-1<<endl;
        return;
    }
    ll p=0;
    vector<pair<ll, pair<ll, ll>>> ans;
    for(ll i=1; i<=n; i++){
        if(v[i]==0){
            ll j=i+1;
            while(j<=n && v[j]==0){
                j++;
            }
            j--;
            ans.push_back({0LL, {i, j}});
            i=j;
        }
        else{
            ll j=i+1;
            while(j<=n && v[j]==0){
                j++;
            }
            j--;
            ans.push_back({v[i], {i, j}});
            i=j;
        }
    }
    // for(auto it:ans){
    //     cout<<it.first<<" ";
    // }
    // cout<<endl;
    vector<pair<ll, ll>> res;
    ll k=ans.size();
    ll a;
    if(k&1){
        res.push_back(ans[0].second);
        a=1;
    }
    else{
        a=0;
    }
    for(ll i=a; i<k; i+=2){
        if(ans[i].first!=ans[i+1].first){
            res.push_back({ans[i].second});
            res.push_back({ans[i+1].second});
        }
        else{
            ll tmp=ans[i].second.second-ans[i].second.first+1;
            if(tmp%2==1){
                // res.push_back({ans[i].second});
                // res.push_back({ans[i+1].second});
                res.push_back({ans[i].second.first, ans[i+1].second.second});
            }
            else{
                ll x = ans[i].second.first;
                res.push_back({x, x});
                ll y=ans[i+1].second.second;
                res.push_back({x+1, y});
            }
        }
    }
    cout<<res.size()<<endl;
    for(auto it:res){
        cout<<it.first<<" "<<it.second<<endl;
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