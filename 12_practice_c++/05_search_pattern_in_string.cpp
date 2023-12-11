#include<iostream>
using namespace std;

bool searchPattern(string str, string pat){
    if(str.find(pat) != string::npos){
        return true;
    }
    return false;
}

int main(){
    int t;
    cout<<"Enter the sample size"<<endl;
    cin>>t;
    while(t--){
        string str, pat;
        cin>>str>>pat;
        if(searchPattern(str, pat)){
            cout<<"Present"<<endl;
        }
        else{
            cout<<"Not present"<<endl;
        }
    }
    return 0;
}