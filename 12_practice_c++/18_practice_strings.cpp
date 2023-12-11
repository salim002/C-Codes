// Program to check if strings are rotations of each other or not

#include<iostream>
using namespace std;
 
bool areRotations(string s1, string s2){
   if(s1.length() != s2.length()){
       return false;
   }
   string temp = s1 + s1;
   if(temp.find(s2) != string::npos){
       return true;
   }
   return false;
}
 
int main()
{
    string str1, str2;
    cin>>str1>>str2;
   if(areRotations(str1, str2)){
       cout<<"Strings are rotations of each other"<<endl;
    }
   else{
       cout<<"Strings are not rotations of each other"<<endl;
   }
   return 0;
}