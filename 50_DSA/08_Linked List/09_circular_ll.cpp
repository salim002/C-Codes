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

node* insertAtHead(node* head, int val){
    node* n = new node(val);
    if(head == NULL){
        n->next = n;
        head = n;
    }
    else{
        node* temp = head;
        while(temp->next != head){
            temp = temp->next;
        }
        temp->next = n;
        n->next = head;
        head = n;
    }
    return head;
}

node* insertAtTail(node* head, int val){
    node* n = new node(val);
    if(head==NULL){
        head = insertAtHead(head, val);
    }
    else{
        node* temp = head;
        while(temp->next != head){
            temp = temp->next;
        }
        temp->next = n;
        n->next = head;
    }
    return head;
}

node* deleteAtHead(node* head){
    node* temp = head;
    while(temp->next != head){
        temp = temp->next;
    }
    node* todelete = head;
    temp->next = head->next;
    head = head->next;
    delete todelete;
    return head;
}

node* deletion(node* head, int pos){
    node* temp = head;
    int count = 1;
    if(pos == 1){
        head = deleteAtHead(head);
        return head;
    }
    while(count != pos-1){
        temp = temp->next;
        count++;
    }
    node* todelete = temp->next;
    temp->next = temp->next->next;
    delete todelete;
    return head;
}

void split(node* head, node* &head1, node* &head2){
    if(head == NULL){
        return;
    }
    node* fastptr = head;
    node* slowptr = head;
    while(fastptr->next != head && fastptr->next->next != head){
        fastptr = fastptr->next->next;
        slowptr = slowptr->next;
    }
    if(fastptr->next != head){
        fastptr = fastptr->next;
    }
    head1 = head;
    if(head->next != head){
        head2 = slowptr->next;
    }
    fastptr->next = head2;
    slowptr->next=head1;
}

void display(node* head){
    node* temp = head;
    do{
        cout<<temp->data<<" ";
        temp = temp->next;
    }while(temp != head);
    cout<<endl;
}

int main(){
    node* head = NULL;
    node* head1 = NULL;
    node* head2 = NULL;
    head = insertAtTail(head, 1);
    head = insertAtTail(head, 2);
    head = insertAtTail(head, 3);
    head = insertAtTail(head, 4);
    head = insertAtTail(head, 5);
    head = insertAtTail(head, 6);
    head = insertAtTail(head, 7);
    head = insertAtTail(head, 8);
    display(head);
    // head = deletion(head, 3);
    // display(head);
    // head = deletion(head, 1);
    split(head, head1, head2);
    // display(head);
    display(head1);
    display(head2);
    
    return 0;
}