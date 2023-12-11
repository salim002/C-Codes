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

void printSubtreeNodes(node* root, int k){
    if(root==NULL || k<0){
        return;
    }
    if(k==0){
        cout<<root->data<<" ";
    }
    printSubtreeNodes(root->left, k-1);
    printSubtreeNodes(root->right, k-1);
}

int printNodesAtdistK(node* root, node* target, int k){
    if(root == NULL){
        return -1;
    }
    if(root == target){
        printSubtreeNodes(root, k);
        return 0;
    }
    int dl = printNodesAtdistK(root->left, target, k);
    if(dl != -1){
        if(dl+1 == k){
            cout<<root->data<<" ";
        }
        else{
            printSubtreeNodes(root->right, k-dl-2);
        }
        return 1 + dl;
    }
    int dr = printNodesAtdistK(root->right, target, k);
    if(dr != -1){
        if(dr+1 == k){
            cout<<root->data<<" ";
        }
        else{
            printSubtreeNodes(root->left, k-dr-2);
        }
        return 1 + dr;
    }
    return -1;
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
    node* target = root->right;
    printNodesAtdistK(root, root->right, 1);
    // printSubtreeNodes(root->right, 1);

    return 0;
}