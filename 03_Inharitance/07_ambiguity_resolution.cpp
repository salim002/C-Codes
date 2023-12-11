#include<iostream>
using namespace std;

class base1
{
    public:
        void greet()
        {
            cout<<"How are you?"<<endl;
        }
};

class base2
{
    public:
        void greet()
        {
            cout<<"Kaise ho?"<<endl;
        }
};

class derived : public base1, public base2
{
    int a;
    public:
        void greet()
        {
            base1 :: greet();
            // base2 :: greet();
        }
};

class B
{
    public:
        void say()
        {
            cout<<"Hello World!"<<endl;
        }
};

class D : public B
{
    public:
        void say() //D's new say method will overrite base class's say() method
        {
            cout<<"Hello my beautiful people!"<<endl;
        }
};
int main()
{
    //Ambiguity 1
    base1 b1;
    b1.greet();

    base2 b2;
    b2.greet();

    derived d;

    // d.base1::greet();
    // d.base2::greet();
    d.greet();


    //Ambiguity 2

    // B b;
    // b.say();

    // D d;
    // d.say();

    
    return 0;
}