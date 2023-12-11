#include<iostream>
#include<map>
#include<string>
// #include<unordered_map>
using namespace std;

int main(){
    map<string, int> marksMap;
    // unordered_map<string, int> marksMap; //for using this we must have to use unordered_map headerfile
    marksMap["Salim"] = 98;
    marksMap["Jack"] = 59;
    marksMap["Salim"] = 99;
    marksMap["Shubham"] = 4;

    marksMap.insert({{"Harry", 40}, {"shubham", 60}});

    /*map<string, int> :: iterator iter;
    iter = marksMap.begin();
    for(iter=marksMap.begin(); iter!=marksMap.end(); iter++){
        cout<<(*iter).first<<" "<<(*iter).second<<endl;
    }*/
    for(auto i:marksMap)    // Very short method to print elements of a Map
    {
        cout<<i.first<<" "<<i.second<<endl;
    }

    cout<<"The size is: "<<marksMap.size()<<endl;

    cout<<"The maximum size is: "<<marksMap.max_size()<<endl;

    cout<<"The empty return value is: "<<marksMap.empty()<<endl;

    cout<<marksMap["Salim"]<<endl;


    return 0;
}