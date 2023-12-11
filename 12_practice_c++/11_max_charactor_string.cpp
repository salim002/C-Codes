#include<iostream>
#include<string>
using namespace std;

// int max_freq(string s){
//     int maxCount=0, index = 0;
//     for(int i=0; i<s.size(); i++){
//         int count = 0;
//         for(int j=0; j<s.size(); j++){
//             if(s[i]==s[j]){
//                 count++;
//             }
//         }
//         if(count>maxCount){
//             maxCount = count;
//             index = i;
//         }
//     }
//     // return s[index];  // if we want to return this, first we have to change return type of this function to 'char'
//     return maxCount;
// }

void max_frequency(string s){
    int maxCount=0, index = 0;
    for(int i=0; i<s.size(); i++){
        int count = 0;
        for(int j=0; j<s.size(); j++){
            if(s[i]==s[j]){
                count++;
            }
        }
        if(count>maxCount){
            maxCount = count;
            index = i;
        }
    }
    if(maxCount==1){
        cout<<"No charactor in this string occur more than one time"<<endl;
    }
    else{
        cout<<"maximum frequency is of '"<<s[index]<<"' and it's frequency is '"<<maxCount<<"'"<<endl;
    }
    cout<<index<<endl;

}
int main(){
    string str;
    getline(cin, str);
    max_frequency(str);
    // cout<<max_freq(str)<<endl;
    return 0;
}