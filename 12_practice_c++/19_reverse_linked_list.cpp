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
    node* n = new node(val);
    if(head == NULL){
        head = n;
        return head;
    }
    node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = n;
    return head;
}

node* insertAtHead(node* head, int val){
    node* n = new node(val);
    if(head == NULL){
        head = n;
    }
    else{
        n->next = head;
        head = n;
    }
    return head;
}

node* reverse(node* head){
    node* prevptr = NULL;
    node* currptr = head;
    node* nextptr;
    while(currptr != NULL){
        nextptr = currptr->next;
        currptr->next = prevptr;
        prevptr = currptr;
        currptr = nextptr;
    }
    return prevptr;
}

node* deleteAtHead(node* head){
    node* temp = head;
    head = temp->next;
    delete temp;
    return head;
}

node* deleteAtTail(node* head){
    node* temp = head;
    while(temp->next->next != NULL){
        temp = temp->next;
    }
    node* toDelete = temp->next;
    temp->next = NULL;
    delete toDelete;
    return head;

}

void display(node* head){
    node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main(){
    node* head = NULL;
    head = insertAtTail(head, 1);
    head = insertAtTail(head, 2);
    head = insertAtTail(head, 3);
    head = insertAtTail(head, 4);
    head = insertAtTail(head, 5);
    head = insertAtHead(head, 6);
    head = insertAtHead(head, 7);
    display(head);
    // head = deleteAtHead(head);
    // head = deleteAtTail(head);
    display(head);
    node* newHead = reverse(head);
    display(newHead);
    
    return 0;
}