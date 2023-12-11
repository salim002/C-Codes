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

bool isIdentical(node* root1, node* root2){
    if(root1 == NULL && root2 == NULL){
        return true;
    }

    else if(root1==NULL || root2==NULL){
        return false;
    }
    else{
        bool cond1 = root1->data == root2->data;
        bool cond2 = isIdentical(root1->left, root2->left);
        bool cond3 = isIdentical(root1->right, root2->right);
        if(cond1 && cond2 && cond3){
            return true;
        }
        return false;
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

    node* root2 = new node(1);
    root2->left = new node(2);
    root2->right = new node(3);
    root2->left->left = new node(4);
    root2->left->right = new node(5);
    root2->right->left = new node(6);
    root2->right->right = new node(7);
    cout<<endl;
    if(isIdentical(root, root2)){
        cout<<"BSTs are identical"<<endl;
    }else{
        cout<<"BSTs not identical"<<endl;
    }
    return 0;
}