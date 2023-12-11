#include <iostream>
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

node* LCA(node * root, int n1,int n2)
{
    if (root == NULL)
       return root;
    if (root->data == n1 || root->data == n2)
       return root;
 
    node* leftLCA = LCA(root->left, n1, n2);
    node* rightLCA = LCA(root->right, n1, n2);
 
    if(left != NULL && right != NULL){
        return root;
    }
    if(left == NULL && right == NULL){
        return NULL;
    }
    if (left != NULL){
        return leftLCA;
    }
    return rightLCA;
}

int findDist(node *root, int k, int dist)
{
    if(root == NULL){
        return -1;
    }
    if(root->data == k){
        return dist;
    }
 
    int left = findDist(root->left, k, dist+1);
    if (left == -1){
       return findDist(root->right, k, dist+1);
    }
    return left;
}
 
int distBtwNodes(node* root, int a, int b)
{
    node* lca = LCA(root, a , b);
 
    int d1 = findDist(lca, a, 0);
    int d2 = findDist(lca, b, 0);
 
    return d1 + d2;
}

int main()
{
    node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);
    root->right->right->right = new node(8);
    cout<<endl;
    cout<<distBtwNodes(root, 5, 8)<<endl;

    return 0;
}