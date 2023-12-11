#include<bits/stdc++.h>
using namespace std;

int main(){
    deque<int> dq;
    dq.push_back(3);
    dq.push_back(4);
    dq.push_front(5);
    dq.push_front(6);
    // for(auto it:dq){
    //     cout<<it<<" ";
    // }
    // cout<<endl;
    cout<<dq.front()<<endl;
    cout<<dq.back()<<endl;
    return 0;
}