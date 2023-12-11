#include<iostream>
#include<functional>
#include<algorithm>
using namespace std;

int main(){
    // Function Objects (Functor): Function wrapped in a class so that it available like an object
    int arr[] = {1, 73, 4, 2, 54, 27};
    sort(arr, arr+5); // wil sort the first 5 elements of the array
    for(int i=0; i<6; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    sort(arr, arr+5,greater<int>()); //Here greater<int>() is a function object
                                     //It will sort the elements of the array is decending order
    for(int i=0; i<6; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}