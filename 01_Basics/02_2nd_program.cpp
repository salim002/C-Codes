#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout<<"Enter the first number: "<<endl;
    cin>>a;
    cout<<"Enter the second number: "<<endl;
    cin>>b;
    cout<<" value of a + b is "<< a + b<<endl;
    cout<<" value of a - b is "<< a - b<<endl;
    cout<<" value of a * b is "<< a * b<<endl;
    cout<<" value of a / b is "<< a / b<<endl;
    cout<<" value of a / b is "<<(float) a / b<<endl; //typecasting
    cout<<" value of a % b is "<< a % b<<endl;
}