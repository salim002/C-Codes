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
    ll neg=0;
    for(i=0; i<n; i++){
        cin>>v[i];
        if(v[i]<0){
            neg++;
        }
    }
    // cout<<neg<<endl;
    if(is_sorted(v.begin(), v.end())){
        cout<<"YES"<<endl;
        return;
    }
    for(i=0; i<n; i++){
        if(v[i]<0){
            v[i] *= -1;
        }
    }
    for(i=0; i<neg; i++){
        v[i] *= -1;
    }
    if(is_sorted(v.begin(), v.end())){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    // for(auto it:v){
    //     cout<<it<<" ";
    // }
    // cout<<endl;
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