#include<iostream>
using namespace std;

class base
{
    int data1;
    public:
        int data2;
        void setdata();
        int getdata1();
        int getdata2();
};

class derived : public base
{
    int data3;
    public:
        void process();
        void display();
};

void base ::setdata(void)
{
    data1 = 10;
    data2 = 20;
}

int base ::getdata1(void)
{
    return data1;
}

int base :: getdata2(void)
{
    return data2;
}

void derived ::process(void)
{
    data3 = data2 * getdata1();
}

void derived ::display(void)
{
    cout<<"The value of data1 is "<<getdata1()<<endl;
    cout<<"The value of data2 is "<<data2<<endl;
    cout<<"The value of data3 is "<<data3<<endl;
}

int main()
{
    // base o1;
    derived c1;
    c1.setdata();
    c1.process();
    c1.display();
    return 0;
}