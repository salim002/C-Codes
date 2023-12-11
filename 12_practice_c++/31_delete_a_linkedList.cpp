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

node* insertAtTail(node* head, int val)
{
    node *n = new node(val);

    if (head == NULL)
    {
        head = n;
    }
    else{
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
    }
    return head;
}

node* insertAtHead(node* head, int val){
    node* n = new node(val);
    n->next = head;
    head = n;
    return head;
}

void display(node* head)
{
    node* temp = head;
    while (temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

void deleteLinkedList(node* &head){
    node* curr = head;
    node* next = NULL;
    while(curr!=NULL){
        next = curr->next;
        delete(curr);
        curr = next;
    }
    head = NULL;
}

int main(){
    node* head = NULL;
    head = insertAtTail(head, 1);
    head = insertAtTail(head, 2);
    head = insertAtTail(head, 3);
    head = insertAtTail(head, 4);
    head = insertAtTail(head, 5);
    head = insertAtTail(head, 6);
    head = insertAtTail(head, 7);
    display(head);
    deleteLinkedList(head);
    display(head);
    head = insertAtTail(head, 4);
    head = insertAtTail(head, 3);
    display(head);
    return 0;
}