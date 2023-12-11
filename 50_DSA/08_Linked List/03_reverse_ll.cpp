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

node* reverse(node* head){
    node* prevptr=NULL;
    node* currptr=head;
    node* nextptr;
    while(currptr!=NULL){
        nextptr = currptr->next;
        currptr->next=prevptr;
        prevptr=currptr;
        currptr=nextptr;
    }
    return prevptr;
}

node* reverseRecursive(node* head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    node* newHead = reverseRecursive(head->next);
    head->next->next=head;
    head->next=NULL;
    return newHead;
}

int main()
{
    node* head = NULL;
    head = insertAtTail(head, 10);
    head = insertAtTail(head, 20);
    head = insertAtTail(head, 30);
    head = insertAtHead(head, 40);
    head = insertAtHead(head, 50);
    display(head);
    node * newhead = reverse(head);
    // node* newhead = reverseRecursive(head);
    display(newhead);
    return 0;
}