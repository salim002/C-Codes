#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    string arr[] = {"sandwitch", "apple", "students", "college", "ranchi", "j"};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<endl;
    }
    cout<<endl;
    sort(arr, arr+n);
    // sort(arr, arr+n,greater<string>()); // Sorting in decending order
    for(int i=0; i<n; i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}