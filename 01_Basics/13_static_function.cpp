#include<iostream>
using namespace std;


int product(int a , int b)
{   
    static int c=0; //This executes only ones
    c++; // or c=c+1, prints a*b+c each time
    return a*b+c;   //Next time this function is run, the value of c will be retained
    //c++; //will return a*b each time
}
int main(){
    int a=2, b=3;
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