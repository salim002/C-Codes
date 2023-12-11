#include<iostream>
using namespace std;


inline int product(int a , int b)
{
    return a*b; // 'inline' makes (a,b) = return value of int product() i.e. a*b directly;
}
int main(){
    int a, b;
    cout << "Enter two numbers: "<<endl;
    cin>>a>>b;
    cout<<"The product of a & b is: "<<product(a,b)<<endl;
    cout<<"The product of a & b is: "<<product(a,b)<<endl;
    cout<<"The product of a & b is: "<<product(a,b)<<endl;
    cout<<"The product of a & b is: "<<product(a,b)<<endl;
    cout<<"The product of a & b is: "<<product(a,b)<<endl;
    cout<<"The product of a & b is: "<<product(a,b)<<endl;
    cout<<"The product of a & b is: "<<product(a,b)<<endl;
    cout<<"The product of a & b is: "<<product(a,b)<<endl;
    cout<<"The product of a & b is: "<<product(a,b)<<endl;
    return 0;
}