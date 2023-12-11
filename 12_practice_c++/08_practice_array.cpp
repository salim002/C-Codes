// Program for addition of array elements

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int sum(int arr[], int n){
    int sum = 0;
    for(int i=0; i<n; i++){
        sum += arr[i];
    }
    return sum;
}

int product(int x, int y){
    return x*y;
}

int main(){
    // int n;
    // cin>>n;
    // int arr[n];
    // for(int i=0; i<n; i++){
    //     cin>>arr[i];
    // }
    int n = 5;
    int arr[] = {1, 2, 3, 4, 5};
    cout<<"Your array is: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Sum of it's all elements is: "<<sum(arr, n)<<endl;

    cout<<accumulate(arr,arr+n, 0)<<endl; //Prints the sum of all elements of given arry up to n elements
    cout<<accumulate(arr,arr+n, 1, product)<<endl; //Prints the product of all elements of given arry up to n elements
    cout<<accumulate(arr,arr+n, 100, std::minus<int>()); //performing substraction using predefined minus function
    return 0;
}