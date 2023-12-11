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
    vl v(m), p;
    for(i=0; i<m; i++){
        cin>>v[i];
    }
    sort(all(v));
    for(i=1; i<m; i++){
        p.push_back(v[i]-v[i-1]-1);
    }
    p.push_back(v[0]-1+(n-v[m-1]));
    sort(all(p));
    reverse(all(p));
    ll k=4, ans=0;
    ans+=p[0]-1;
    if(ans==0){
        ans=1;
    }
    if(ans<0){
        ans=0;
    }
    for(i=1; i<p.size(); i++){
        if((p[i]-k)>0){
            ll tmp=p[i]-k-1;
            if(tmp==0){
                tmp=1;
            }
            if(tmp<0){
                tmp=0;
            }
            ans+=tmp;
            k+=4;
            continue;
        }
        else{
            break;
        }
    }
    cout<<n-ans<<endl;
    // for(auto it:p){
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