#include <iostream>
using namespace std;

class employee
{
public:
    static int count; //default value is zero, shared by all objects
    //int count = 0; // Each objects will have seperate count
    int id;

    void setData(void)
    {
        cout << "Enter the id: " << endl;
        cin >> id;
        count++;
    }

    void getData()
    {
        cout << "The id of this employee is " << id << " and it's employee number is " << count << endl;
    }

    static void getCount(void)
    {
        cout<<"The value of count is: "<<count<<endl;
        //cout<<id; // throws an error since static member function can only access static variables
    }
};

// int employee::count; //default value is zero
int employee::count = 1000; // default is changed to 1000

int main()
{
    employee salim, harry, subham;
    //count is static data member of the class employee

    // salim.setData();
    // salim.getData();
    // employee::getCount();

    // salim.setData();
    // salim.getData();
    // employee::getCount();

    // harry.setData();
    // harry.getData();
    // employee::getCount();

    // subham.setData();
    // subham.getData();
    // employee::getCount();

    cout<<employee::count<<endl;
    cout<<salim.count<<endl;
    // employee::count=20;
    salim.count=10;
    cout<<employee::count<<endl;
    cout<<salim.count<<endl;
    cout<<subham.count<<endl;


    return 0;
}