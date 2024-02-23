#include<iostream>
using namespace std;

class Employee{
    private:
        int a, b, c;
    public:
        int d, e;
        void setData(int a1, int b1, int c1);
        void getData()
        {
            cout<<"The value of a is "<<a<<endl;
            cout<<"The value of b is "<<b<<endl;
            cout<<"The value of c is "<<c<<endl;
            cout<<"The value of d is "<<d<<endl;
            cout<<"The value of e is "<<e<<endl;


        }
};
void Employee :: setData(int a1, int b1, int c1)
{
    a=a1;
    b=b1;
    c=c1;
}

int main(){
    // Static allocation
    Employee salim;
    salim.d = 34;
    salim.e = 50;
    salim.setData(5,10,15); 
    salim.getData();
    // salim->getData(); // It will throw errr since '->' can only be applied to object pointer

    // Dynamic allocation
    Employee * e = new Employee;
    e->d=34;
    e->e=50;
    // e.setData(5, 10, 15); It will throw error since object pointer should be accessed by '->' sign
    e->setData(5, 10, 15);
    // (*e).setData(5, 10, 15); // It will also work.    (*e) = dereferenced value
    e->getData();
    return 0;
}