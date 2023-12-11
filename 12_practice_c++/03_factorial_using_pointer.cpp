#include<iostream>
using namespace std;

void factorial(int &fac){
    int n = fac;
    fac = 1;
    for(int i=1; i<=n; i++){
        fac = fac * i;
    }
}

// void factorial(int &fac,int n){
//     fac = 1;
//     for(int i=1; i<=n; i++){
//         fac = fac * i;
//     }
// }

// int factorial(int n){
//     int fac = 1;
//     for(int i=1; i<=n; i++){
//         fac = fac * i;
//     }
//     return fac;
// }

int main(){
    int n;
    cin>>n;
    // cout<<factorial(n)<<endl;
    // factorial(n,n);
    factorial(n);
    cout<<n<<endl;
    return 0;
}