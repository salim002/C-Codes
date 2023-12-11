#include<iostream>
using namespace std;

// int max_frequency(int arr[], int n){
//     int maxCount = 0, index = 0;
//     for(int i=0; i<n; i++){
//         int count = 0
//         for(int j=0; j<n; j++){
//             if(arr[i]==arr[j]){
//                 count++;
//             }
//         }
//         if(count>maxCount){
//             maxCount = count;
//             index = i;
//         }
//     }
//     return arr[index];
// }
void max_frequency(int arr[], int n){
    int maxCount = 0,index = 0;
    for(int i=0; i<n; i++){
        int count = 0;
        for(int j=0; j<n; j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count>maxCount){
            maxCount = count;
            index = i;
        }
    }
    cout<<"maximum frequency is of "<<arr[index]<<" and its frequency is "<<maxCount<<endl;
}
int main(){
    int arr[] = {2,3,4,5,5,4,5,5,4,5,5,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    // cout<<max_frequency(arr, size)<<endl;
    max_frequency(arr, size);
    return 0;
}