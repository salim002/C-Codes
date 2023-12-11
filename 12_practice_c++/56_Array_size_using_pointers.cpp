#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[5] = {3, 2, 6, 1, 7};
    int n = *(&arr+1)-arr;
    cout<<n<<endl;
    // int m = (&arr[0]+5)-arr;
    // cout<<m<<endl;

    int array[10][4] = {{8, 4, 6, 1}, {3, 4, 5, 6}};
    int m = (*(&array+1)-array) * (*(&array[0]+1)-array[0]);
    cout<<m<<endl;

    cout<<**(&arr)<<endl;
    cout<<***(&array)<<endl;

    return 0;
}
