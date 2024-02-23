#include <iostream>
using namespace std;
class shop{
    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    void initCounter(void) { counter = 0; }
    void setPrice(void);
    void displayPrice(void);
};

void shop ::setPrice(void)
{
    cout << "Enter the Id of item no. " << counter + 1 << endl;
    cin >> itemId[counter];
    cout << "Enter the price of item no. " << counter + 1 << endl;
    cin >> itemPrice[counter];
    counter++;
}

void shop ::displayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "Price of item with Id " << itemId[i] << " is " << itemPrice[i] << endl;
    }
}
int main()
{
    // class shop dukan;  // Less common
    shop dukan; // More common
    dukan.initCounter();
    dukan.setPrice();
    dukan.setPrice();
    dukan.setPrice();
    dukan.displayPrice();

    return 0;
}