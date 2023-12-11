// Program to reverse an array

#include <iostream>
using namespace std;

void reverse_array(int arr[], int n){
    int start = 0, end = n-1;
    while(start < end){
        // int temp = arr[start];
        // arr[start] = arr[end];
        // arr[end] = temp;
        // start++;
        // end--;
        swap(arr[start++], arr[end--]);
    }
}

int main()
{
    int arr[] = {2, 6, 1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    reverse_array(arr, n);

    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}