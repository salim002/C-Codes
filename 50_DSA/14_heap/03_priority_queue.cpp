#include<bits/stdc++.h>
using namespace std;

int main(){
    priority_queue<int> pq;  // Max heap
    // priority_queue<int, vector<int>, greater<int>> pq;  // Min heap
    pq.push(3);
    pq.push(5);
    pq.push(2);
    pq.push(10);
    pq.push(8);
    cout<<pq.size()<<endl;
    cout<<pq.top()<<endl;
    pq.pop();
    cout<<pq.top()<<endl;
    if(pq.empty()){
        cout<<"Queue is empty"<<endl;
    }
    else{
        cout<<"Queue is not empty"<<endl;
    }

    while(!pq.empty()){
        pq.pop();
    }

    if(pq.empty()){
        cout<<"Queue is empty"<<endl;
    }
    else{
        cout<<"Queue is not empty"<<endl;
    }
    cout<<pq.top()<<endl;
    pq.pop();
    cout<<pq.top()<<endl;
    return 0;
}