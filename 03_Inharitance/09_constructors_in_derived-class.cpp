#include<iostream>
using namespace std;

/*

Case 1:
class B: public A
{
    //order of execution of constructor -> first A() then B()

    case 2:
    class A :public B, public C
    {
        //order of execution of constructor -> B() then C() then A() since B is written first
    }
};

Case 3:
class A :public B, virtual public C
{
    //order of execution of constructor -> C() then B() and A()
};

*/

class base1
{
    int data1;
    public:
        base1(int i)
        {
            data1 = i;
            cout<<"Base1 class constructor called"<<endl;
        }
        void printDataBase1()
        {
            cout<<"The value of data1 is "<<data1<<endl;
        }
};

class base2
{
    int data2;
    public:
        base2(int i)
        {
            data2 = i;
            cout<<"Base2 class constructor called"<<endl;
        }
        void printDataBase2()
        {
            cout<<"The value of data2 is "<<data2<<endl;
        }
};



class derived : public base1, public base2
{
    int derived1, derived2;
    public:
        derived(int a, int b, int c, int d): base1(a), base2(b)
        {
            derived1 = c;
            derived2 = d;
            cout<<"Derived class constructor called"<<endl;
        }
        void printDataDerived()
        {
            cout<<"The value of derived1 is "<<derived1<<endl;
            cout<<"The value of derived2 is "<<derived2<<endl;
        }
};

int main(){
    derived salim(1, 2, 3, 4);
    base1 b(10);
    b.printDataBase1();
    salim.printDataBase1();
    salim.printDataBase2();
    salim.printDataDerived();
    
    return 0;
}