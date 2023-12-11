#include<iostream>
using namespace std;

int missing_integer(int arr[], int n){
    int total = (n+1)*(n+2)/2;
    for(int i=0; i<n; i++){
        total -= arr[i];
    }
    return total;
}

int main(){
    int arr[] = {1, 2, 3, 5, 6, 7, 8};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<missing_integer(arr, n)<<endl;
    return 0;
}