#include<iostream>
using namespace std;

class complex
{
    int a, b;
    public:
    //Below line means that non member function named sumComplex() is allowed to do anything with private data
    friend complex sumComplex(complex o1, complex o2);
        void setData(int x, int y)
        {
            a = x;
            b = y;
        }
        void printNumber()
        {
            cout<<"The number is "<<a<<" + "<<b<<" i"<<endl;
        }
};

complex sumComplex(complex o1, complex o2)
{
    complex o3;
    o3.setData((o1.a+o2.a), (o1.b+o2.b));
    return o3;
}

int main(){
    complex c1, c2, c3;
    c1.setData(2,3);
    c1.printNumber();

    c2.setData(4,5);
    c2.printNumber();

    c3 = sumComplex(c1,c2);
    c3.printNumber();


    return 0;
}
/*Properties of friends functions

1. Not in the scope of class
2. Since it is not in the scope of the class, it cannot be called from the opject of that class. 
    c3.sumComplex() == Invalid
3. Can be invoked without the help of any object.
4. Usually contains the objects as arguements
5. Can be declared inside public or private section of the class
6. It cannot access the members drectly by their names and need object_name.member_name to access any member.

*/