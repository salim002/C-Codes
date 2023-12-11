#include<iostream>
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

bool search(node* head, int x){
    node* temp = head;
    while(temp != NULL){
        if(temp->data==x){
            return true;
        }
        temp = temp->next;
    }
    return false;
}

void deleteNode(node* &head, int val){
    if(search(head,val)){
        if(head->data==val){
            node* temp = head;
            head = temp->next;
            delete temp;
        }
        else{
            node* temp = head;
            while(temp->next->data != val){
                temp = temp->next;
            }
            node* todelete = temp->next;
            temp->next = temp->next->next;
            delete todelete;
        }
    }
    else{
        cout<<"Element not found"<<endl;
    }
}

int main(){
    node* head = NULL;
    head = insertAtTail(head, 10);
    head = insertAtTail(head, 20);
    head = insertAtTail(head, 30);
    head = insertAtHead(head, 40);
    head = insertAtHead(head, 50);
    display(head);

    deleteNode(head, 50);
    display(head);
    deleteNode(head, 10);
    display(head);
    return 0;
}