#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    long long ans=0, base=1;
    for(int i=s.size()-1; i>=0; i--){
        int last=(s[i]-'0');
        ans+=(last*base);
        base*=2;
    }
    cout<<ans<<endl;
    return 0;
}