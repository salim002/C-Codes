#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long int ans = pow(2, n) - 1;
        // cout<<ans<<endl;
        cout<<(1 << n)-1<<endl;
    }
    return 0;
}