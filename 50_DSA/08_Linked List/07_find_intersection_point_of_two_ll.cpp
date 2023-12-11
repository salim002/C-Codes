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

int sizeOfLinkedlist(node* head){
    node* temp = head;
    int count = 0;
    while(temp!=NULL){
        temp = temp->next;
        count++;
    }
    return count;
}

node* intersect(node* head1, node* head2, int pos){
    node* temp1 = head1;
    pos--;
    while(pos--){
        temp1 = temp1->next;
    }
    node* temp2 = head2;
    while(temp2->next != NULL){
        temp2 = temp2->next;
    }
    temp2->next = temp1;
    return head2;
}

int intersection(node* head1, node* head2){
    int l1 = sizeOfLinkedlist(head1);
    int l2 = sizeOfLinkedlist(head2);
    int d = 0;
    node* ptr1;
    node* ptr2;
    if(l1>l2){
        d = l1 - l2;
        ptr1 = head1;
        ptr2 = head2;
    }
    else{
        d = l2 - l1;
        ptr1 = head2;
        ptr2 = head1;
    }
    while(d--){
        if(ptr1 == NULL){
            return -1;
        }
        ptr1 = ptr1->next;
    }
    while(ptr1 != NULL && ptr2 != NULL){
        if(ptr1 == ptr2){
            return ptr1->data;
        }
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }
    return -1;
}

int main()
{
    node* head1 = NULL;
    node* head2 = NULL;
    head1 = insertAtTail(head1, 10);
    head1 = insertAtTail(head1, 20);
    head1 = insertAtTail(head1, 200);
    head1 = insertAtTail(head1, 30);
    head1 = insertAtHead(head1, 40);
    head1 = insertAtHead(head1, 50);
    head2 = insertAtTail(head2, 4);
    head2 = insertAtTail(head2, 6);
    head2 = insertAtHead(head2, 2);
    head2 = insertAtHead(head2, 1);

    display(head1);
    display(head2);
    head2 = intersect(head1, head2, 3);
    display(head2);

    cout<<intersection(head1, head2)<<endl;

    return 0;
}
