#include<iostream>
using namespace std;

#define n 20

class queue{
    int* arr;
    int front;
    int back;
    public:
    queue(){
        front = -1;
        back = -1;
        arr = new int[n];
    }

    void push(int val){
        if(back == n-1){
            cout<<"Queue overflow!"<<endl;
            return;
        }
        back++;
        arr[back] = val;
        if(front == -1){
            front++;
        }
    }

    void pop(){
        if(front== -1 || front>back){
            cout<<"Queue is empty"<<endl;
            return;
        }
        front++;
    }

    int peak(){
        if(front== -1 || front>back){
            cout<<"No elements in queue"<<endl;
            return -1;
        }
        return arr[front];
    }

    bool isEmpty(){
        if(front==-1 || front>back){
            return true;
        }
        return false;
    }
};

int main(){
    queue q;
    q.pop();
    q.push(1);
    q.push(2);
    q.push(3);
    cout<<q.peak()<<endl;
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    return 0;
}