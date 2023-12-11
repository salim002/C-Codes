#include<bits/stdc++.h>
using namespace std;

class heap{
    public:
    vector<int> v;
    heap(){
        v.push_back(-1);
    }
    void insert(int val){
        v.push_back(val);
        int idx=v.size()-1;
        while(idx>1){
            // if(v[idx/2]<v[idx]){
            //     swap(v[idx/2], v[idx]);
            //     idx/=2;
            // }
            int parent = idx/2;
            if(v[parent]<v[idx]){
                swap(v[parent], v[idx]);
                idx=parent;
            }
            else{
                return;
            }
        }
    }
    void print(){
        for(int i=1; i<v.size(); i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
    int sz(){
        return v.size()-1;
    }
    void pop(){
        swap(v[1], v[v.size()-1]);
        v.pop_back();
        int idx=1;
        while(2*idx<v.size()){
            int i=2*idx;
            if(2*idx+1<v.size()){
                if(v[2*idx]>=v[2*idx+1]){
                    i=2*idx;
                }
                else{
                    i=2*idx+1;
                }
            }
            if(v[idx]<v[i]){
                swap(v[idx], v[i]);
                idx=i;
            }
            else{
                return;
            }
        }
    }
};

void heapify(vector<int> &v, int idx, int n){
    int largest = idx;
    int left=2*idx, right=2*idx+1;
    if(left<n && v[largest]<v[left]){
        largest=left;
    }
    if(right<n && v[largest]<v[right]){
        largest=right;
    }
    if(largest!=idx){
        swap(v[idx], v[largest]);
        heapify(v, largest, n);
    }
}

int main(){
    heap h;
    h.insert(3);
    h.insert(1);
    h.insert(5);
    h.insert(8);
    h.insert(10);
    h.insert(9);
    h.insert(90);
    // h.insert(12);
    h.print();
    // cout<<h.sz()<<endl;
    // int t=h.sz();
    // while(t--){
    //     h.print();
    //     h.pop();
    // }
    vector<int> v = {-1, 3, 1, 5, 8, 10, 9, 90};
    int n=v.size();
    for(int i=1; i<n; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    for(int i=n/2; i>=1; i--){
        heapify(v, i, n);
    }
    for(int i=1; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    return 0;
}