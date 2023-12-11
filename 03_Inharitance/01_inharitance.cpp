#include<iostream>
using namespace std;

class employee
{
    public:
    int id = 50;
        employee(int num)
        {
            id = num;
        }
        employee(){}
};

class programmer :public employee
{
    public:
        int languageCode = 9;
        
        programmer(int inpId)
        {
            id = inpId;
        }
        
        void getData()
        {
            cout<<id<<endl;
        }
};

int main()
{
    employee salim(35);
    cout<<salim.id<<endl;

    programmer harry(30);
    cout<<harry.languageCode<<endl;
    cout<<harry.id<<endl;
    //harry.getData();
    
    return 0;
}