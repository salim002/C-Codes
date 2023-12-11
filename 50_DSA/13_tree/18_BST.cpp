#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* left, *right;
    node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

node* insertBST(node* root, int val){
    if(root == NULL){
        return new node(val);
    }
    if(val < root->data){
        root->left = insertBST(root->left, val);
    }
    else if(val > root->data){
        root->right = insertBST(root->right, val);
    }
    return root;
}

void printInorder(node* root){
    if(root == NULL){
        return;
    }
    printInorder(root->left);
    cout<<root->data<<" ";
    printInorder(root->right);
}

int main(){
    node* root = NULL;
    root = insertBST(root, 5);
    insertBST(root, 3);
    insertBST(root, 1);
    insertBST(root, 4);
    insertBST(root, 2);
    insertBST(root, 7);
    insertBST(root, 37);
    insertBST(root, 17);
    insertBST(root, 27);
    printInorder(root);
    
    return 0;
}