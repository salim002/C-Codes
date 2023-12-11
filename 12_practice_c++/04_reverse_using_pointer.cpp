#include<iostream>
using namespace std;

int main(){
    int n,r,rev=0;
    int *num;
    num = &n;
    cin>>n;
    while(*num>0){
        r = *num%10;
        rev = rev*10 + r;
        *num = *num/10;
    }
    cout<<rev<<endl;
    return 0;
}