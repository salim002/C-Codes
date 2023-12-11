#include<iostream>
using namespace std;

void rotateOneStepLeft(int arr[], int n){
    for(int i=0; i<n-1; i++){
        swap(arr[i], arr[i+1]);
    }
}

void rotate_r_times(int arr[], int n, int r){
    while(r--){
        rotateOneStepLeft(arr, n);
    }
}

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr)/sizeof(arr[0]);
    rotate_r_times(arr, n, 2);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}