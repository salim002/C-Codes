// Program to count number of times a given int occurs

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

int count_frequency(node* head, int val){
    int count = 0;
    node* temp = head;
    while(temp != NULL){
        if(temp->data == val){
            count++;
        }
        temp = temp->next;
    }
    // cout<<"The frequency of "<<val<<" is ";
    return count;
}

int main(){
    node* head = NULL;
    head = insertAtTail(head, 1);
    head = insertAtTail(head, 1);
    head = insertAtTail(head, 2);
    head = insertAtTail(head, 2);
    head = insertAtTail(head, 3);
    head = insertAtTail(head, 4);
    head = insertAtTail(head, 5);
    head = insertAtTail(head, 5);
    head = insertAtTail(head, 5);
    head = insertAtTail(head, 5);
    display(head);
    cout<<count_frequency(head, 5)<<endl;
    return 0;
}