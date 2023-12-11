#include<bits/stdc++.h>
using namespace std;

int largest_sum(int arr[], int n){
    int max = INT_MIN, min = 0;
    for(int i=0; i<n; i++){
        min += arr[i];
        if(min>max){
            max = min;
        }
        if(min<0){
            min = 0;
        }
    }
    return max;
}

int main(){
    int arr[] = {-2, -3, 4, -1, -2, 1, 5, -3, 100};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<largest_sum(arr, size)<<endl;
    
    return 0;
}