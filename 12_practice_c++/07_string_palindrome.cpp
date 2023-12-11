#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void chk_palindrome(string s)
{
    // string temp = s;
    // reverse(temp.begin(), temp.end());
    // if(s==temp){
    //     cout<<s<<" is a palindrome"<<endl;
    // }
    // else{
    //     cout<<s<<" is not a palindrome"<<endl;
    // }
    int l = 0;
    int h = s.size() - 1;
    while(h>l){
        if(s[l++] != s[h--]){
            cout<<s<<" is not a palindrome"<<endl;
            return;
        }
    }
    cout<<s<<" is a palindrome"<<endl;
}

int main()
{
    string s;
    getline(cin, s);
    chk_palindrome(s);
    return 0;
}