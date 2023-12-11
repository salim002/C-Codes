#include <iostream>
using namespace std;

class node{
public:
    int data;
    node* next;
    node(int val)
    {
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

node* reverseK(node* head, int k){
    node* prevptr = NULL;
    node* currptr = head;
    node* nextptr;
    int count = 0;
    while(currptr!=NULL && count<k){
        nextptr = currptr->next;
        currptr->next = prevptr;
        prevptr = currptr;
        currptr = nextptr;
        count++;
    }
    if(currptr!=NULL){
        head->next = reverseK(currptr,k);
    }
    return prevptr;
}

int main()
{
    node* head = NULL;
    head = insertAtTail(head, 10);
    head = insertAtTail(head, 20);
    head = insertAtTail(head, 30);
    head = insertAtTail(head, 40);
    head = insertAtTail(head, 50);
    head = insertAtTail(head, 60);
    head = insertAtTail(head, 70);
    head = insertAtTail(head, 80);
    head = insertAtTail(head, 90);
    head = insertAtTail(head, 100);
    head = insertAtTail(head, 110);
    
    display(head);
    node* newhead = reverseK(head, 3);
    display(newhead);
    
    return 0;
}