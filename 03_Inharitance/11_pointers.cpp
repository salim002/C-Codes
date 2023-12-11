#include<iostream>
using namespace std;

int main(){
    //New operator

    int *ptr = new int(5);
    cout<<*ptr<<endl;

    float *p = new float(40.76);
    delete p;
    cout<<*p<<endl;

    int *arr = new int[3];
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    //delete arr; //Delete operator, arr will be deleted
    delete[] arr; 
    cout<<arr[0]<<endl;
    cout<<arr[1]<<endl;
    cout<<arr[2]<<endl;

    //Delete operator
    return 0;
}