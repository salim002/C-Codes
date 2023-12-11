#include<iostream>
using namespace std;
// void swap(string &s1, string &s2){
//     string temp = s1;
//     s1 = s2;
//     s2 = temp;
// }

int main(){
    string str1, str2;
    getline(cin, str1);
    getline(cin, str2);
    cout<<"***Before swapping***"<<endl;
    cout<<"str1 = "<<str1<<endl;
    cout<<"str2 = "<<str2<<endl;
    cout<<endl;
    swap(str1,str2);
    cout<<"***After swapping***"<<endl;
    cout<<"str1 = "<<str1<<endl;
    cout<<"str2 = "<<str2<<endl;

    return 0;
}