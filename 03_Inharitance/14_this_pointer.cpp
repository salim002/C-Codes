#include<iostream>
using namespace std;

class A{
    int a;
    public:
        A(){} // Default Constructor
        A(int a){
            this->a = a;
        }
        void setData(int a){
            this->a = a; /* 'This' is a pointer that holds the address of the object on which a non-static member function is called.*/
        }
        void getData(){
            cout<<"The value of a is "<<a<<endl;
        }

};

int main(){
    A a;
    a.setData(5);
    a.getData();

    // A* b = new A(15);
    // (*b).getData();
    
    return 0;
}