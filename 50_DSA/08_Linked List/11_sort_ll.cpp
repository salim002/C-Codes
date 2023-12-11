#include<bits/stdc++.h>
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

node* sortList(node* head) {
    vector<int> v;
    node* temp = head;
    while(temp!=NULL){
        v.push_back(temp->data);
        temp=temp->next;
    }
    sort(v.begin(), v.end());
    node* h = head;
    int i=0;
    while(h!=NULL){
        h->data = v[i];
        h=h->next;
        i++;
    }
    return head;
}


int main(){
    node* head = NULL;
    head = insertAtTail(head, 1);
    head = insertAtTail(head, 3);
    head = insertAtTail(head, 2);
    head = insertAtTail(head, 4);
    display(head);
    head = sortList(head);
    display(head);
    return 0;
}