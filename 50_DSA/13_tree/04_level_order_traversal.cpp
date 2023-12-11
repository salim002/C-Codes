#include<iostream>
#include<queue>
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

void levelOrderTraversal(node*root){
    if(root==NULL){
        return;
    }
    queue<node*> q;
    q.push(root);
    while(!q.empty()){
        int k=q.size();
        while(k--){
            node* curr=q.front();
            q.pop();
            cout<<curr->data<<" ";
            if(curr->left){
                q.push(curr->left);
            }
            if(curr->right){
                q.push(curr->right);
            }
        }
        cout<<endl;
    }
    
}

int main(){
    node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);
    levelOrderTraversal(root);
    return 0;
}