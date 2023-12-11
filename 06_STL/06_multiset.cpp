#include<iostream>
#include<set>
using namespace std;

int main(){
    multiset<int> s;//Multiset allows repeatation, elements are in sorted order
    // multiset<int, greater<int>> s; //Elements are in sorted but in descending order
    s.insert(5);
    s.insert(1);
    s.insert(4);
    s.insert(1);
    s.insert(12);
    s.insert(5);
    s.insert(5);
    s.insert(12);
    
    for(auto i:s)
    cout<<i<<" ";
    cout<<endl;

    // s.erase(s.begin()); //Erase one element at the begining
    // s.erase(5); // Erase all instances of 5 from the multiset   
    // s.erase(s.find(5)); //Erase only one 5 form the multiset

    cout<<*(s.find(4))<<endl;
    // cout<<s.size()<<endl;
    // for(auto it=s.rbegin(); it!=s.rend(); it++){
    //     cout<<*it<<" "; //Prints the elements of the multiset in reverse order
    // }
    for(auto it:s){
        cout<<it<<" ";
    }
    
    return 0;
}