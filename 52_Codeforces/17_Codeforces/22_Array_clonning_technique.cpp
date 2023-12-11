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
    // cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        ll n, i;
        cin>>n;
        ll arr[n];
        map<int, int> m;
        for(i=0; i<n; i++){
            cin>>arr[i];
            m[arr[i]]++;
        }
        int max = 0;
        for(auto it: m){
            if(it.second>max){
                max = it.second;
            }
        }
        int temp = max, count = 0;
        while(temp<=n/2){
            temp = temp*2;
            count++;
        }
        if(temp==n){
            cout<<n+count-max<<endl;
        }
        else{
            cout<<n+count-max+1<<endl;
        }
    }
    return 0;
}