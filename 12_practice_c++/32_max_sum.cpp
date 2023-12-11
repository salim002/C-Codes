// Program to calculate max sum in an array such that no two elements are adjacent
// This program may not be correct;

#include<bits/stdc++.h>
using namespace std;

int maxSum(int arr[], int n){
    int max1 = INT_MIN;
    int max2 = INT_MIN;
    int min1 = 0;
    int min2 = 0;
    for(int i=0; i<n; i=i+2){
        min1 += arr[i];
        if(min1>max1){
            max1 = min1;
        }
        if(min1<0){
            min1 = 0;
        }
    }

    for(int i=1; i<n; i=i+2){
        min2 += arr[i];
        if(min2>max2){
            max2 = min2;
        }
        if(min2<0){
            min2 = 0;
        }
    }
    return max(max1, max2);
}

int main(){
    int arr[] = {2, 4, 7, 1, 9, 26, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<maxSum(arr, n)<<endl;
    return 0;
}