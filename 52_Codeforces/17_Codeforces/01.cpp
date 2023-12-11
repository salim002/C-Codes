// Submitted

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        int n;
        cin>>n;
        cin>>s;
        int ans=0;
        for(int i=0; i<n-1; i++){
            if(s[i]=='0' && s[i+1]=='0'){
                ans += 2;
            }
            else if(s[i]=='0' && s[i+1]=='1' && i!= (n-2) && i!=0 && s[i+2]!='1'){
                ans++;
            }
            else if(s[i] == '0' && s[i+1] == '1' && s[i+2] == '0'){
                ans++;
            }
        }
        cout<<ans<<endl;

    }
    return 0;
}