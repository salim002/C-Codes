#include<bits/stdc++.h>
using namespace std;

int stringToInteger(string s, int idx){
    if(idx==0){
        return s[idx]-'0';
    }
    int smallAnswer = stringToInteger(s, idx-1);
    int currDigit = s[idx]-'0';
    return smallAnswer*10+currDigit;
}

int main(){
    string s = "73314455";
    int n = s.size();
    cout<<stringToInteger(s, n-1)<<endl;
    // int ans=0;
    // int cnt=n-1;
    // for(int i=0; i<n; i++){
    //     ans+=(s[i]-'0')*pow(10, cnt);
    //     cnt--;
    // }
    // cout<<ans<<endl;
    return 0;
}