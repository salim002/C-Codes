#include<iostream>
#include<unordered_set>
using namespace std;

int main(){
    unordered_set<int> s;
    s.insert(10);
    s.insert(4);
    s.insert(6);
    s.insert(8);
    s.insert(10);
    s.insert(10);

    for(auto i:s)
    cout<<i<<" ";
    cout<<endl;
    
    cout<<s.size()<<endl;
    return 0;
}