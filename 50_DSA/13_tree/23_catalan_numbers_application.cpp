#include<iostream>
#include<vector>
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

int catalan(int n){
    if(n <= 1){
        return 1;
    }
    int res = 0;
    for(int i=0; i<=n-1; i++){
        res += catalan(i) * catalan(n-i-1);
    }
    return res;
}

vector<node*> constructTrees(int start, int end){
    vector<node*> trees;
    if(start>end){
        trees.push_back(NULL);
        return trees;
    }
    for(int i=start; i<=end; i++){
        vector<node*> leftSubtrees = constructTrees(start, i-1);
        vector<node*> rightSubtrees = constructTrees(i+1, end);
        for(int j=0; j<leftSubtrees.size(); j++){
            node* left = leftSubtrees[j];
            for(int k=0; k<rightSubtrees.size(); k++){
                node* right = rightSubtrees[k];
                node* root = new node(i);
                root->left = left;
                root->right = right;
                trees.push_back(root);
            }
        }
    }
    return trees;
}

void preorder(node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

int main(){
    // for(int i=0; i<4; i++){
    //     cout<<catalan(i)<<" ";
    // }
    // cout<<catalan(3)<<endl;

    vector<node*> totalTrees = constructTrees(1, 3);
    for(int i=0; i<totalTrees.size(); i++){
        cout<<i+1<<" : ";
        preorder(totalTrees[i]);
        cout<<endl;
    }

    return 0;
}