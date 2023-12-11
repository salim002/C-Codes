#include <iostream>
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

bool search(node* head, int val){
    node* temp = head;
    while(temp != NULL){
        if(temp->data==val){
            return true;
        }
        temp = temp->next;
    }
    return false;
}

int sizeOfLinkedlist(node* head){
    node* temp = head;
    int count = 0;
    while(temp!=NULL){
        temp = temp->next;
        count++;
    }
    return count;
}

node* insertAtIndex(node* head, int val, int index){ //All in one function
    node* n = new node(val);

    if(index>sizeOfLinkedlist(head) || index<0){
        cout<<"Invalid index"<<endl;
        return head;
    }
    if(head==NULL){
        head = n;
        return head;
    }
    if(index==0){
        n->next = head;
        head = n;
        return head;
    }
    node* temp = head;
    node* t = temp->next;
    int count = 1;
    while(temp->next!=NULL && count<index){
        temp = temp->next;
        t = t->next;
        count++;
    }
    temp->next = n;
    n->next = t;
    return head;
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
    head = insertAtIndex(head, 34, 3);
    display(head);
    head = insertAtIndex(head, 34, 0);
    display(head);
    head = insertAtIndex(head, 34, -2);
    head = insertAtIndex(head, 34, 10);
    
    // int a;
    // cout<<"Enter the element you want to search in the linked list: ";
    // cin>>a;
    // if(search(head,a)){
    //     cout<<a<<" is present in the linked list"<<endl;
    // }
    // else{
    //     cout<<"Element not found"<<endl;
    // }

    return 0;
}