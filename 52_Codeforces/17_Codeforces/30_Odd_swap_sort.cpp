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
    ll arr[n];
    for(i=0; i<n; i++){
        cin>>arr[i];
    }
    vl temp1, temp2, odd, even;
    for(i=0; i<n; i++){
        if(arr[i]%2){
            temp1.push_back(arr[i]);
            odd.push_back(arr[i]);
        }
        else{
            temp2.push_back(arr[i]);
            even.push_back(arr[i]);
        }
    }
    sort(temp1.begin(), temp1.end());
    sort(temp2.begin(), temp2.end());
    if(temp1 == odd && temp2 == even){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    
}

int main(){
    ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}