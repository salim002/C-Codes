#include<iostream>
using namespace std;
class node{
    public:
    node* left;
    node* right;
    int data;
    node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

bool isSameTree(node* p, node* q){
    if(!p && !q){
        return true;
    }
    if(!p || !q){
        return false;
    }
    if(p->data != q->data){
        return false;
    }
    bool l = isSameTree(p->left, q->left);
    bool r = isSameTree(p->right, q->right);
    if(l && r){
        return true;
    }
    return false;
}


int main(){
    node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);
    cout<<endl;

    return 0;
}