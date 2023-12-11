#include<iostream>
using namespace std;

class complex
{
    int a, b;
    public:
    complex(void){} //Default constructor
    complex(int x, int y); 
    void printNumber()
        {
            cout<<"The number is "<<a<<" + "<<b<<"i"<<endl;
        }
    

};
complex ::complex(int x, int y) // ---> This is a default constructor as it takes no parameters
{
    a = x;
    b = y;
    cout<<"Hello world!"<<endl;
}

int main(){
    complex c1(5, 7); //Implicit call
    c1.printNumber();

    complex c2 = complex(2, 3); //Explicit call
    c2.printNumber();
    complex c3;
    
    return 0;
}