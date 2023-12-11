#include<bits/stdc++.h>
using namespace std;

class Trie{
    public:
    class node{
        public:
        bool end;
        node* next[26];
        node(){
            end=false;
            for(int i=0; i<26; i++){
                next[i]=NULL;
            }
        }
    };
    node* root;
    Trie(){
        root = new node();
    } 
    void insert(string word){
        node* it=root;
        int i=0;
        while(i<word.size()){
            if(it->next[word[i]-'a']==NULL){
                it->next[word[i]-'a'] = new node();
            }
            it = it->next[word[i]-'a'];
            i++;
        }
        it->end=true;
    }
    bool search(string word){
        node* it=root;
        int i=0;
        while(i<word.size()){
            if(it->next[word[i]-'a']==NULL){
                return false;
            }
            it=it->next[word[i]-'a'];
            i++;
        }
        return it->end;
    }
};

int main(){
    Trie* myTrie = new Trie();
    myTrie->insert("salim");
    myTrie->insert("kavi");

    string name="salim";
    // string name="chaitanya";

    if(myTrie->search(name)){
        cout<<name<<" is found"<<endl;
    }
    else{
        cout<<name<<" is not found"<<endl;
    }
    
    return 0;
}