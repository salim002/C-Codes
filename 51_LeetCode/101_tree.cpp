#include<bits/stdc++.h>
using namespace std;

class TreeNode{
    public:
    TreeNode* left;
    TreeNode* right;
    int val;
    TreeNode(int num){
        val = num;
        left=NULL;
        right=NULL;
    }
};

void inorder(TreeNode* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->val<<" ";
    inorder(root->right);
}

int maxDepth(TreeNode* root) {
    if(root==NULL){
        return 0;
    }
    int l = maxDepth(root->left);
    int r = maxDepth(root->right);
    return max(l, r)+1;
}

class Solution {
public:
    int ans=INT_MIN;
    int fun(TreeNode* root){
        if(root==NULL){
            return -1e5;
        }
        int l=fun(root->left);
        int r=fun(root->right);
        int a = max(l, r);
        int b = max(l, r)+root->val;
        int c = l+r+root->val;
        int d = root->val;
        ans = max(ans, max(a, max(b, max(c, d))));
        return max(root->val, a+root->val);

    }
    int maxPathSum(TreeNode* root){
        fun(root);
        return ans;
    }
};


int main(){
    // TreeNode* root = new TreeNode(1);
    // root->left = new TreeNode(2);
    // root->right = new TreeNode(3);
    // root->left->left = new TreeNode(4);
    // root->left->right = new TreeNode(5);
    // root->right->left = new TreeNode(6);
    // root->right->right = new TreeNode(7);
    // inorder(root);
    // cout<<endl;
    return 0;
}