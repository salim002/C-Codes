#include<iostream>
using namespace std;

class complex{
    int real, imaginary;
    public:
        void displayNumber(){
            cout<<"The real part of this number is "<<real<<endl;
            cout<<"The imaginary part of this number is "<<imaginary<<endl;
        }
        void setNumber(int a, int b){
            real = a;
            imaginary = b;
        }
};

int main(){
    complex c1;
    /*c1.set_Number(2,4);
    c1.displayNumber();*/
    /*complex *ptr = &c1;
    (*ptr).setNumber(4,3);
    (*ptr).displayNumber();

    complex *p = new complex;
    (*p).setNumber(9,10);
    (*p).displayNumber();

    complex *pr = new complex;
    pr->setNumber(4,8);
    pr->displayNumber();*/

    complex *arr = new complex[3]; //array of objects
    arr->setNumber(1,3);
    arr->displayNumber();
    
    (arr+1)->setNumber(2,5);
    (arr+1)->displayNumber();
    
    (arr[2]).setNumber(8,10);
    (arr[2]).displayNumber();
    
    return 0;
}