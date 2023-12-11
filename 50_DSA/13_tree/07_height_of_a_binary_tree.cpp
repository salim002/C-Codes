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

void preorder(node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

int calc_height(node* root){
    if(root==NULL){
        return 0;
    }
    int lHeight = calc_height(root->left);
    int rHeight = calc_height(root->right);
    return max(lHeight, rHeight) + 1;
}

int main(){
    node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);
    root->right->right->right = new node(8);
    root->right->right->right->right = new node(8);
    root->right->right->right->right->left = new node(8);
    root->right->right->right->right->left->right = new node(8);
    cout<<calc_height(root)<<endl;

    return 0;
}