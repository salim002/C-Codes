#include<bits/stdc++.h>
using namespace std;

class TreeNode{
    public:
    int val;
    TreeNode *left, *right;
    TreeNode(int val){
        this->val=val;
        left=NULL;
        right=NULL;
    }
};

// void inorder(TreeNode* root){
//     if(root==NULL){
//         return;
//     }
//     inorder(root->left);
//     cout<<root->val<<" ";
//     inorder(root->right);
// }

void inorder(TreeNode* root){
    if(root==NULL) return;
    stack<TreeNode*> st;
    TreeNode* curr = root;
    while(curr || !st.empty()){
        while(curr){
            st.push(curr);
            curr=curr->left;
        }
        curr=st.top();
        st.pop();
        cout<<curr->val<<" ";
        curr=curr->right;
    }
}

void preorder(TreeNode* root){
    if(root==NULL) return;
    stack<TreeNode*> st;
    st.push(root);
    while(!st.empty()){
        TreeNode* curr=st.top();
        st.pop();
        cout<<curr->val<<" ";
        if(curr->right) st.push(curr->right);
        if(curr->left) st.push(curr->left);
    }
}

void postorder(TreeNode* root){
    if(root==NULL) return;
    stack<TreeNode*> st;
    TreeNode* curr=root;
    TreeNode* lastVisited=NULL;
    while(curr || !st.empty()){
        while(curr){
            st.push(curr);
            curr=curr->left;
        }
        TreeNode* topNode = st.top();
        if(topNode->right && topNode->right!=lastVisited){
            curr=topNode->right;
        }
        else{
            cout<<topNode->val<<" ";
            st.pop();
            lastVisited=topNode;
        }
    }
}


int main(){
    TreeNode* root = new TreeNode(1);
    root->left= new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);

    // inorder(root);
    // cout<<endl;

    // preorder(root);
    // cout<<endl;

    postorder(root);

    return 0;
}