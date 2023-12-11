// Program to remove characters from first string which are present in the second string

#include<iostream>
#include<algorithm>
using namespace std;

void remove_chars(string &s1, string s2){
    for(auto it:s2){
        while(find(s1.begin(), s1.end(), it) != s1.end()){
            auto itr = find(s1.begin(), s1.end(), it);
            s1.erase(itr);
        }
    }
}

int main(){
    string str1, str2;
    getline(cin, str1);
    getline(cin, str2);
    cout<<str1<<endl;
    cout<<str2<<endl;
    remove_chars(str1, str2);
    cout<<str1<<endl;
    cout<<str2<<endl;
    return 0;
}