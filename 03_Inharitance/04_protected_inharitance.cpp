#include<iostream>
using namespace std;

class base
{
    protected:
        int a;
    private:
        int b;
    public:
        int c;

};

class derived :protected base
{

};

int main()
{
    base b;
    derived d;
    //cout<<d.a; //will not work since a is protected in both base an derived class
    
    return 0;
}