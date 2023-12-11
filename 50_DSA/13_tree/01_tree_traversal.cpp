#include<iostream>
#include<bits/stdc++.h>
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

void inorder(node* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void postorder(node* root){
    if(root==NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}


void func(node* root, vector<int> &v){
    if(root==NULL){
        return;
    }
    func(root->left, v);
    v.push_back(root->data);
    func(root->right, v);
}

vector<int> inorderTraversal(node* root){
    vector<int> ans;
    func(root, ans);
    return ans;
}

int main(){
    node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);
    // preorder(root);
    // cout<<endl;
    // inorder(root);
    // cout<<endl;
    // postorder(root);
    // cout<<endl;

    // vector<int> inord = inorderTraversal(root);
    // for(auto it:inord){
    //     cout<<it<<" ";
    // }
    // cout<<endl;

    return 0;
}