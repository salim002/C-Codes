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

node* insertAtTail(node* head, int val){
    node *n = new node(val);
    if(head == NULL){
        head = n;
        return head;
    }
    node *temp = head;
    while (temp->next != NULL){
        temp = temp->next;
    }
    temp->next = n;
    return head;
}
node* insertAtHead(node* head, int val){
    node* n = new node(val);
    n->next = head;
    head = n;
    return head;
}

void display(node* head){
    node* temp = head;
    while (temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}


int main(){
    node* head = NULL;
    return 0;
}