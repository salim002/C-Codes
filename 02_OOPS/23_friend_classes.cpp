#include <iostream>
using namespace std;

//forward declaration
class complex;

class calculator{
public:
    int sumRealComplex(complex, complex);
    int sumCompComplex(complex, complex);
};

class complex{
    int a, b;
    //Individually declaring functions as friends
    /*friend int calculator ::sumRealComplex(complex, complex);
    friend int calculator ::sumCompComplex(complex, complex);*/

    // Aliter: Declaring the entire calculator class as friend
    friend class calculator;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

int calculator ::sumRealComplex(complex o1, complex o2)
{
    return (o1.a + o2.a);
}
int calculator ::sumCompComplex(complex o1, complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    complex c1, c2;
    c1.setNumber(1, 2);
    c2.setNumber(5, 7);

    calculator calc;
    int res = calc.sumRealComplex(c1, c2);
    cout << "The sum of real parts of c1 and c2 is " << res << endl;
    
    int resc = calc.sumCompComplex(c1, c2);
    cout << "The sum of complex parts of c1 and c2 is " << resc << endl;
    return 0;
}