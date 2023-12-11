#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node(int val){
        data = val;
        next = NULL;
    }
};

class queue{
    node* front;
    node* back;
    public:
    queue(){
        front = NULL;
        back = NULL;
    }

    void push(int x){
        node* n = new node(x);
        if(front==NULL){
            front = n;
            back = n;
            return;
        }
        back->next = n;
        back = n;
    }

    void pop(){
        if(front==NULL){
            cout<<"Queue underflow!"<<endl;
            return;
        }
        node* temp = front;
        front = front->next;
        delete temp;
    }

    int peak(){
        if(front==NULL){
            cout<<"Queue underflow!"<<endl;
            return -1;
        }
        return front->data;
    }

    bool empty(){
        return front==NULL;
    }
};

int main(){
    queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    cout<<q.peak()<<endl;
    q.pop();
    q.pop();
    cout<<q.empty()<<endl;
    q.pop();
    q.pop();
    cout<<q.empty()<<endl;
    
    return 0;
}