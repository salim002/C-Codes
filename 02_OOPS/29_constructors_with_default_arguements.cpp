#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    complex(int x, int y = 9) //Constructor with default arguement
    {
        a = x;
        b = y;
    }
    void printNumber()
    {
        cout << "The number is " << a << " + " << b << "i" << endl;
    }
};

int main()
{
    complex c1(4);
    c1.printNumber();

    complex c2(4, 6);
    c2.printNumber();

    return 0;
}