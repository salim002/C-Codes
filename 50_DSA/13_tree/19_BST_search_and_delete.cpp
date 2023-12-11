#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* left, *right;
    node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

node* insertBST(node* root, int val){
    if(root == NULL){
        return new node(val);
    }
    if(val < root->data){
        root->left = insertBST(root->left, val);
    }
    else{
        root->right = insertBST(root->right, val);
    }
    return root;
}

node* searchInBST(node* root, int key){
    if(root == NULL){
        return NULL;
    }
    if(root->data == key){
        return root;
    }
    if(key < root->data){
        return searchInBST(root->left, key);
    }
    return searchInBST(root->right, key);
}

node* inorderSucc(node* root){
    node* curr = root;
    while(curr && curr->left != NULL){
        curr = curr->left;
    }
    return curr;
}

node* deleteInBST(node* root, int key){
    if(key < root->data){
        root->left = deleteInBST(root->left, key);
    }
    else if(key > root->data){
        root->right = deleteInBST(root->right, key);
    }
    else{
        if(root->left == NULL){
            node* temp = root->right;
            delete root;
            return temp;
            
        }
        else if(root->right == NULL){
            node* temp = root->left;
            delete root;
            return temp;
        }
        node* temp = inorderSucc(root->right);
        root->data = temp->data;
        root->right = deleteInBST(root->right, temp->data);
    }
    return root;
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
    node* root = NULL;
    root = insertBST(root, 5);
    insertBST(root, 3);
    insertBST(root, 1);
    insertBST(root, 4);
    insertBST(root, 2);
    insertBST(root, 7);
    cout<<endl;
    
    // if(searchInBST(root, 5)){
    //     cout<<"key exists"<<endl;
    // }else{
    //     cout<<"key doesn't exists"<<endl;
    // }
    printInorder(root);
    cout<<endl;
    root = deleteInBST(root, 3);
    printInorder(root);
    cout<<endl;

    // int key;
    // cout<<"Enter a key to delete: ";
    // cin>>key;
    // if(searchInBST(root, key)){
    //     cout<<"BST before deletion of "<<key<<": ";
    //     printInorder(root);
    //     cout<<endl;
    //     root = deleteInBST(root, 4);
    //     cout<<"BST after deletion of "<<key<<": ";
    //     printInorder(root);
    //     cout<<endl;
    // }else{
    //     cout<<key<<" doesn't exists in this BST"<<endl;
    // }

    return 0;
}