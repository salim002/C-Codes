#include<bits/stdc++.h>
using namespace std;

void heapify(vector<int> &v, int i, int n){
    int largest = i;
    int left = 2*i+1, right = 2*i+2;
    if(left<n && v[left]>v[largest]){
        largest=left;
    }
    if(right<n && v[right]>v[largest]){
        largest=right;
    }
    if(largest!=i){
        swap(v[i], v[largest]);
        heapify(v, largest, n);
    }
}

void heapsort(vector<int> &v){
    int n=v.size();
    for(int i=n/2-1; i>=0; i--){
        heapify(v, i, n);
    }
    for(int i=n-1; i>=0; i--){
        swap(v[0], v[i]);
        heapify(v, 0, i);
    }
}

void print(vector<int> v){
    for(auto it:v){
        cout<<it<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int> v = {3, 2, 5, 7, 1, 82, 100, 99, 92};
    heapsort(v);
    print(v);
    return 0;
}