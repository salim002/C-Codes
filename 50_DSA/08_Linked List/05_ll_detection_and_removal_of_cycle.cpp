//There are some faults in the following program
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

void makeCycle(node* head, int pos){
    node* temp = head;
    node* startNode;
    int count = 1;
    while(temp->next!=NULL){
        if(count==pos){
            startNode=temp;
        }
        temp = temp->next;
        count++;
    }
    temp->next = startNode;
}

bool detectCycle(node* head){
    node* fast = head;
    node* slow = head;
    while(fast!=NULL && fast->next!=NULL){
        fast = fast->next->next;
        slow = slow->next;
        if(fast==slow){
            return true;
        }
    }
    return false;
}

void removeCycle(node* head){
    node* slow = head;
    node* fast = head;
    do{
        slow = slow->next;
        fast = fast->next->next;
    }while(slow != fast);
    if(fast==head){
        while(slow->next != head){
            slow = slow->next;
        }
        slow->next = NULL;
    }

    fast = head;
    while(fast->next != slow->next){
        fast = fast->next;
        slow = slow->next;
    }
    slow->next = NULL;
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
    display(head);
    makeCycle(head,3 );
    // display(head);
    // removeCycle(head);

    if(detectCycle(head)){
        cout<<"Cycle is present in this linked list"<<endl;
    }
    else{
        cout<<"Cycle is not present in this linked list"<<endl;
    }
    cout<<detectCycle(head)<<endl; // If cycle is present it will print 1 otherwise it will print 0
    return 0;
}