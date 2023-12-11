#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;
    node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

int idx=0;
node* fun(int l, int r, vector<int> &preorder, vector<int> & inorder, unordered_map<int, int> &mp){
    if(l>r){
        return NULL;
    }
    int curr = preorder[idx];
    idx++;
    node* root = new node(curr);
    if(l==r){
        return root;
    }
    int mid = mp[curr];
    root->left = fun(l, mid-1, preorder, inorder, mp);
    root->right = fun(mid+1, r, preorder, inorder, mp);
    return root;
}

node* buildTree(vector<int>& preorder, vector<int>& inorder) {
    int l=0, r=inorder.size()-1;
    unordered_map<int, int> mp;
    for(int i=0; i<=r; i++){
        mp[inorder[i]]=i;
    }
    return fun(l, r, preorder, inorder, mp);
}

void printInorder(node* root){
    if(root==NULL){
        return;
    }
    printInorder(root->left);
    cout<<root->data<<" ";
    printInorder(root->right);
}

int main(){
    vector<int> preorder = {1, 2, 4, 3, 5};
    vector<int> inorder = {4, 2, 1, 5, 3};
    node* root = buildTree(preorder, inorder);
    printInorder(root);

    return 0;
}