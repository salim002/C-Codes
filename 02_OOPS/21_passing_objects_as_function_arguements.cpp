#include<iostream>
using namespace std;

class complex
{
    int a,b;
    public:
        void setData(int x, int y)
        {
            a = x;
            b = y;
        }
        void printNumber()
        {
            cout<<"The number is "<<a<<"+"<<b<<"i"<<endl;
        }
        void setDataBySum(complex o1, complex o2)
        {
            a = o1.a + o2.a;
            b = o1.b + o2.b;
        }
};

class x{
    int i, j;
    public:
    void set(complex o1, complex o2){
        // i = o1.a + o2.a;
        // j = o1.b + o2.b;  // Throws error, since we can't access private member of other class
    }
};

int main(){
    complex c1, c2, c3, c4, c5;
    c1.setData(4, 5);
    c1.printNumber();

    c2.setData(2, 3);
    c2.printNumber();

    c3.setData(4, 6);
    c3.printNumber();

    c4.setDataBySum(c1,c2);
    c4.printNumber();

    c5.setDataBySum(c2,c3);
    c5.printNumber();


    return 0;
}