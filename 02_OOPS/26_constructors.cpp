#include<iostream>
using namespace std;

class complex
{
    int a, b;
    public:
    //Creating a constructor
    //Constructor is special member function with the same name as of the class.
    //It is used to initialize the objects of its class
    //It is automatically invoked whenever an object is created

    complex(void); // Constructor declaration
    
    void printNumber()
        {
            cout<<"The number is "<<a<<" + "<<b<<"i"<<endl;
        }
    

};
complex ::complex(void) // ---> This is a default constructor as it takes no parameters
{
    a = 10;
    b = 20;
    cout<<"Hello world!"<<endl;
}

int main(){
    complex c1;
    c1.printNumber();
    
    
    return 0;
}

//Characteristics of contructors 
/*
    1. It should be declared in the public section of the class
    2. They are automatically invoked whenever the object is created 
    3. They can not return values and do not have return types
    4. It can have default arguements
    6. We cannot refer to their address

*/