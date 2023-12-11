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

void solve(){
    ll n, i;
    cin>>n;
    vl v(n);
    map<ll,ll> m;
    ll temp = 0;
    for(i=0; i<n; i++){
        cin>>v[i];
        m[v[i]]++;
        temp = max(temp, m[v[i]]);
    }
    if(n&1){
        cout<<"NO"<<endl;
        return;
    }
    if(temp>n/2){
        cout<<"NO"<<endl;
        return;
    }
    sort(v.begin(), v.end());
    if(temp==n/2){
        if(v[n/2-1]==v[n/2]){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
    // for(i=0; i<n/2; i++){
    //     cout<<v[i]<<" ";
    //     cout<<v[n-i-1]<<" ";
    // }
    vl ans(n);
    ll j=0;
    for(i=0; i<n; i+=2){
        ans[i] = v[j++];
    }
    for(i=1; i<n; i+=2){
        ans[i] = v[j++];
    }
    for(auto it:ans){
        cout<<it<<" ";
    }
    cout<<endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}