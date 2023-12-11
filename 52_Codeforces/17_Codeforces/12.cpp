#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;

// ll numberOfOdds(ll arr[], ll n){
//     ll odds = 0;
//     for(ll i=0; i<n; i++){
//         if(arr[i]%2 == 1){
//             odds++;
//         }
//     }
//     return odds;
// }

int main(){
    ios_base::sync_with_stdio(false);
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll arr[n];
        for(ll i=0; i<n; i++){
            cin>>arr[i];
        }
        bool one = false;
        bool ans = true;
        for(ll i=0; i<n; i++){
            if(arr[i]==1){
                one = true;
            }
        }
        if(one != true){
            cout<<"YES"<<endl;
        }
        else{
            sort(arr, arr+n);
            for(ll i=0; i<n; i++){
                if((arr[i+1]-arr[i])==1){
                   ans = false; 
                   break;
                }
            }
            if(ans){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }

    return 0;
}