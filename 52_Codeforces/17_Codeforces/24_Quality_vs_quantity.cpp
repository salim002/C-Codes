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
    sort(arr, arr+n);
    ll blue = arr[0]+arr[1], red = arr[n-1];
    ll l = 2, r = n-2;
    while(l<r){
        blue += arr[l];
        red += arr[r];
        l++;
        r--;
    }
    if(red>blue){
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