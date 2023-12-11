#include <iostream>
using namespace std;

class Y;
class X{
    int a;
    public:
        void setNumber(int x)
        {
            a = x;
        }
        friend void add(X, Y);
};

class Y
{
    int b;

public:
    void setNumber(int y)
    {
        b = y;
    }
    friend void add(X, Y);
};
void add(X o1, Y o2)
{
    cout << "Summing data of X and Y gives me " << o1.a + o2.b << endl;
}

int main()
{
    X C1;
    Y C2;
    C1.setNumber(4);
    C2.setNumber(45);

    add(C1, C2);
    return 0;
}