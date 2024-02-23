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

class d: protected derived
{
    void fun(int n){
        a=n;
    }
};

int main()
{
    base b;
    derived d;
    // cout<<b.c;
    //cout<<d.a; //will not work since a is protected in both base an derived class
    // cout<<d.c; //It will also not work, because c became protected in derived class
    
    return 0;
}