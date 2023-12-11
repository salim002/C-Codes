#include<iostream>
using namespace std;

class number
{
    int a;
    public:
        number(){
            a = 0;
            cout<<"Default constructor is called"<<endl;
        }
        number(int num) 
        {
            a = num;
        }

        // when there is no copy constructor compiler suplies its own copy constructor 
        number(number &obj) //Copy constructor, In copy constructer we can only pass parameter by-reference not by-value,
                            // otherwise it will stuck in copy constructor call loop and ultimately stack overflow will occur.
        {
            a = obj.a;
            cout<<"Copy constructor is called"<<endl;
        }

        void display()
        {
            cout<<"The number for this object is "<<a<<endl;
        }

};

int main()
{
    // number x, y, z(45);
    // x.display();
    // y.display();
    number z(45);
    z.display();
    number x1(z); //Copy constructor invoked
    // number x1 = z; //We can also use this method for invoking the copy constructor 

    number x2;
    x2 = z; // Copy consructor won't be called

    x1.display();
    x2.display();

    return 0;
}