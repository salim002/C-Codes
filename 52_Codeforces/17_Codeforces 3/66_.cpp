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

void solve(){
    ll n, i;
    cin>>n;
    vl v(n), v1;
    for(i=0; i<n; i++){
        cin>>v[i];
    }
    if(n==1){
        if(v[0]%2==0){
            cout<<0<<endl;
        }
        else{
            cout<<-1<<endl;
        }
        return;
    }
    ll cnt=0;
    for(i=1; i<=n; i++){
        ll temp=i, tmp=0;
        while(temp%2==0){
            cnt++;
            tmp++;
            temp/=2;
        }
        if(tmp>0){
            v1.push_back(tmp);
        }
    }
    ll k=n, ans=0;
    for(i=0; i<n; i++){
        while(v[i]%2==0 && v[i]>0){
            v[i]/=2;
            k--;
        }
        if(k==0){
            break;
        }
    }
    if(k>cnt){
        cout<<-1<<endl;
        return;
    }
    if(k==0){
        cout<<0<<endl;
        return;
    }
    sort(all(v1));
    reverse(all(v1));
    for(i=0; i<v1.size(); i++){
        if(k<=0){
            break;
        }
        else{
            k-=v1[i];
            ans++;
        }
    }
    cout<<ans<<endl;
    // cout<<v1.size()<<endl;
    // for(auto it:v1){
    //     cout<<it<<" ";
    // }
    // cout<<endl;
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