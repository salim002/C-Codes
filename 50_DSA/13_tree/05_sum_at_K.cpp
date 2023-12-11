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

int sum_At_K(node*root, int k){
    if(root==NULL){
        return -1;
    }
    int level = 0;
    int sum = 0;
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node* root = q.front();
        q.pop();
        if(root != NULL){
            if(level == k){
                sum += root->data;
            }
            if(root->left){
                q.push(root->left);
            }
            if(root->right){
                q.push(root->right);
            }
        }
        else if(!q.empty()){
            q.push(NULL);
            level++;
        }
    }
    return sum;
    
}

int main(){
    node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);
    cout<<sum_At_K(root, 2)<<endl;  //Sum at level 2
    return 0;
}