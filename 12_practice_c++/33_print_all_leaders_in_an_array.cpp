// An element is leader if it is greater than all the elements to its right side. And the rightmost element is always a leader. 
// For example in the array {16, 17, 4, 3, 5, 2}, leaders are 17, 5 and 2. 

#include<bits/stdc++.h>
using namespace std;

void printLeaders(int arr[], int n){
    stack<int> st;
    vector<int> res;
    for(int i=n-1; i>=0; i--){
        while(!st.empty() && arr[i]>st.top()){
            st.pop();
        }
        if(st.empty()){
            res.push_back(arr[i]);
        }
        st.push(arr[i]);
    }
    reverse(res.begin(), res.end());
    for(auto it:res){
        cout<<it<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[] = {16, 17, 4, 3, 5, 2};
    int n = sizeof(arr)/sizeof(arr[0]);
    printLeaders(arr, n);
    return 0;
}