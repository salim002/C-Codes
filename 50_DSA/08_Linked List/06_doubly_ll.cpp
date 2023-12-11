#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node* prev;
    node(int val){
        data = val;
        next = NULL;
        prev = NULL;
    }
};

void display(node* head){
    if(head==NULL){
        cout<<"The linked list is empty";
    }
    else{
        node* temp = head;
        while(temp != NULL){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
    }
    cout<<endl;
}

node* insertAtHead(node* head, int val){
    node* n = new node(val);
    n->next = head;
    if(head!=NULL){
        head->prev = n;
    }
    head = n;
    return head;
}

node* insertAtTail(node* head, int val){
    node* n = new node(val);
    if(head == NULL){
        head = n;
    }
    node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = n;
    n->next = NULL;
    n->prev = temp;
    return head;
}

node* deleteAtHead(node* head){
    node* temp = head;
    if(temp->next!=NULL){
        temp->next->prev = NULL;
    }
    head = temp->next;
    delete temp;
    return head;
}


node* deletion(node* head, int pos){
    if(pos==1){
        return deleteAtHead(head);
    }
    node* temp = head;
    int count = 1;
    while(temp!=NULL && count<pos){
        temp = temp->next;
        count++;
    }
    temp->prev->next = temp->next;
    if(temp->next!=NULL){
        temp->next->prev = temp->prev;
    }
    delete temp;
    return head;
}

int main(){
    node* head = NULL;
    head = insertAtTail(head, 1);
    head = insertAtTail(head, 2);
    head = insertAtTail(head, 3);
    head = insertAtHead(head, 5);
    head = insertAtHead(head, 6);
    display(head);
    head = deletion(head, 4);
    display(head);
    
    return 0;
}