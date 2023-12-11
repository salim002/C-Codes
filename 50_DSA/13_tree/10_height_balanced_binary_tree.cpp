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

int height(node* root){
    if(root==NULL){
        return 0;
    }
    int lHeight = height(root->left);
    int rHeight = height(root->right);
    return max(lHeight, rHeight) + 1;
}
 
bool isBalanced(node* root){
    if(root == NULL){
        return true;
    }
    int lh = height(root->left);
    int rh = height(root->right);
    if(abs(lh-rh) <= 1 && isBalanced(root->left) && isBalanced(root->right)){
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
    root->right->right->right = new node(9);
    // root->right->right->right->right = new node(10);
 
    if(isBalanced(root)){
        cout << "Tree is balanced";
    }
    else{
        cout << "Tree is not balanced";
    }

    return 0;
}