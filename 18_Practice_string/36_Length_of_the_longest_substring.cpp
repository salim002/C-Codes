// Program for length of longest substring without repeating characters

#include <bits/stdc++.h>
using namespace std;
 
int longestUniqueSubsttr(string s){
    map<char, int> mp;
    int max_length = 0;
    int start = 0;
 
    for(int i=0; i<s.length(); i++){
        if(mp.find(s[i]) != mp.end()){
            start = max(start, mp[s[i]] + 1);
        }
        mp[s[i]] = i;
        max_length = max(max_length,i - start + 1);
    }
    return max_length;
}
 
int main()
{
    string s;
    cin>>s;
    cout<<longestUniqueSubsttr(s)<<endl;
}