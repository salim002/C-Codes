#include<iostream>
using namespace std;

void merge(int arr1[], int arr2[], int n1, int n2){
    int arr[n1+n2];
    int i=0, j=0, k=0;
    while(i<n1 && j<n2){
        if(arr1[i]<arr2[j]){
            arr[k] = arr1[i];
            i++;
            k++;
        }
        else{
            arr[k] = arr2[j];
            j++;
            k++;
        }
    }
    while(i<n1){
        arr[k] = arr1[i];
        i++;
        k++;
    }
    while(j<n2){
        arr[k] = arr2[j];
        j++;
        k++;
    }
    for(int i=0; i<k; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int a1[] = {1, 4, 7, 9, 25, 48, 50};
    int a2[] = {2, 3, 8, 10, 42, 68, 100, 200, 500};
    int n1 = sizeof(a1)/sizeof(a1[0]);
    int n2 = sizeof(a2)/sizeof(a2[0]);
    merge(a1, a2, n1, n2);

    return 0;
}