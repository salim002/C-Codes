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

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        ll n, i;
        cin>>n;
        string arr[n-2];
        string ans = "";
        bool a = true;
        for(i=0; i<n-2; i++){
            cin>>arr[i];
            if(i==0){
                ans += arr[i];
                continue;
            }
            if(arr[i][0] == arr[i-1][1]){
                ans += arr[i][1];
            }
            else{
                ans += arr[i];
                a = false;
            }
        }
        if(a){
            ans += "a";
        }
        cout<<ans<<endl;
    }
    
    return 0;
}