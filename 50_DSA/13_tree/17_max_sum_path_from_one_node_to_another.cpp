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

int maxSumUtil(node* root, int &ans){
    if(root==NULL){
        return 0;
    }
    int left = maxSumUtil(root->left, ans);
    int right = maxSumUtil(root->right, ans);
    int nodeMax = max(max(root->data+left, root->data+right), max(root->data, root->data+left+right));
    ans = max(ans, nodeMax);
    int singlePathSum = max(root->data, max(root->data+left, root->data+right));
    return singlePathSum;
}

int maxSumPath(node* root){
    int ans = INT_MIN;
    maxSumUtil(root, ans);
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
    cout<<maxSumPath(root)<<endl;

    return 0;
}