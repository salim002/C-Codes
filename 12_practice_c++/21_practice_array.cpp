// Program to check whhether a pair exists whoose sum is equal to a given number in an array.

#include<iostream>
using namespace std;

bool checkPair(int arr[], int n, int x){
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]+arr[j] == x){
                cout<<"Pair is :- ("<<arr[i]<<", "<<arr[j]<<") whoose sum is equal to "<<x<<endl; 
                return true;
            }
        }
    }
    return false;
}

int main(){
    int arr[] = {2, 5, 9, 7, -1, -5, 8, 6, 10};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x;
    cin>>x;
    if(checkPair(arr, n, x)){
        cout<<"Pair exists for "<<x<<endl;
    }
    else{
        cout<<"Pair doesn't exists for "<<x<<endl;
    }
    return 0;
}