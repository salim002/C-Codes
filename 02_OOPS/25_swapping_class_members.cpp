#include<iostream>
using namespace std;

class Y;

class X
{
    int a;
    public:
        void setValue(int x)
        {
            a = x;
        }
        void displayValue()
        {
            cout<<"The value a is "<<a<<endl;
        }
        friend void swap(X &, Y &);
};

class Y
{
    int b;
    public:
        void setValue(int x)
        {
            b = x;
        }
        void displayValue()
        {
            cout<<"The value b is "<<b<<endl;
        }
        friend void swap(X &, Y &);
};

void swap(X &o1, Y &o2){
    int temp = o1.a;
    o1.a = o2.b;
    o2.b = temp;
}

int main(){
    X c1;
    Y c2;
    c1.setValue(5);
    c2.setValue(64);
    c1.displayValue();
    c2.displayValue();

    swap(c1, c2);
    cout<<endl<<"After swapping..."<<endl;
    c1.displayValue();
    c2.displayValue();
    return 0;
}