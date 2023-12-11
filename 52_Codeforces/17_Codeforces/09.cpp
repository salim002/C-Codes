#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int ans=0;
        string even = "";
        set<char> st;
        for(int i=0; i<s.size(); i++){
            if(s[i]==s[i+1]){
                even+=s[i];
                even+=s[i+1];
                i++;
            }
            else{
                while(i<s.size() && st.find(s[i])==st.end()){
                    st.insert(s[i]);
                    i++;
                }
                if(i<s.size()){
                    even+=s[i];
                    even+=s[i];
                }
                st.clear();
            }
        }
        ans = s.size()-even.size();
        cout<<ans<<endl;
    }
    
    return 0;
}