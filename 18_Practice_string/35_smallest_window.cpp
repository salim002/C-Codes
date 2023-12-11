// Find the smallest window in a string containing all characters of another string


#include <bits/stdc++.h>
using namespace std;

string Minimum_Window(string s, string t){
    int ans = INT_MAX;
    int start = 0;
    int count = 0;
    map<char, int> m;
    for(int i=0; i<t.size(); i++){
        if(m[t[i]]==0){
            count++;
        }
        m[t[i]]++;
    }
    int i=0, j=0;
    while(j<s.size()){
        m[s[j]]--;
        if(m[s[j]]==0){
            count--;
        }
        if(count==0){
            while(count == 0){
                if(ans > j-i+1){
                    ans = min(ans, j-i+1);
                    start = i;
                }
                m[s[i]]++;
                if(m[s[i]]>0){
                    count++;
                }
                i++;
            }
        }
        j++;
    }
    if(ans != INT_MAX){
        return s.substr(start, ans);
    }
    else{
        return "-1";
    }
}
 
int main(){
    string s, t;
    getline(cin, s);
    getline(cin, t); 
    cout<<"Smallest window that contain all character: "<<Minimum_Window(s, t)<<endl;

    return 0;
}