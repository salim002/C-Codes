#include<iostream>
using namespace std;

int largest_element(int arr[],int n){
    int L=arr[0];
    for(int i=0; i<n; i++){
        if(arr[i] > L){
            L = arr[i];
        }
    }
    return L;
}

int main(){
    int arr[] = {2, 4, 5,7, 9, 3, 100, 6};
    // int arr[] = {-4, -2, -5, -7, -9, -3, -100, -6};

    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<largest_element(arr,n)<<endl;
    return 0;
}