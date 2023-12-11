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
    vl v1(n+1), v2(n+1);
    for(i=1; i<=n; i++){
        cin>>v1[i];
    }
    for(i=1; i<=n; i++){
        cin>>v2[i];
    }
    if(is_sorted(v1.begin(), v1.end()) && is_sorted(v2.begin(), v2.end())){
        cout<<0<<endl;
        return;
    }
    // for(i=1; i<n; i++){
    //     if(v1[i]>v1[i+1] && v2[i]<v2[i+1] || v1[i]<v1[i+1] && v2[i]>v2[i+1]){
    //         cout<<-1<<endl;
    //         return;
    //     }
    // }
    ll count=0;
    vector<pair<ll, ll>> v;
    for(i=1; i<=n; i++){
        for(ll j=1; j<n; j++){
            if(v1[j]>v1[j+1] || v2[j]>v2[j+1]){
                count++;
                swap(v1[j], v1[j+1]);
                swap(v2[j], v2[j+1]);
                v.push_back(make_pair(j, j+1));
            }
        }
    }
    if(is_sorted(v1.begin(), v1.end()) && is_sorted(v2.begin(), v2.end())){
        cout<<count<<endl;
        for(auto it:v){
            cout<<it.first<<" "<<it.second<<endl;
        }
    }
    else{
        cout<<-1<<endl;
    }
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