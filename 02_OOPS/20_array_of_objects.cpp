#include<iostream>
using namespace std;

class employee
{
    int id;
    int salary;
    public:
        void setId(void)
        {
            salary = 100;
            cout<<"Enter the id of employee"<<endl;
            cin>>id;
        }
        void getId(void)
        {
            cout<<"The id of this employee is "<<id<<endl;
        }
};

int main(){
    /*employee salim, harry, rohan, lovish;
    salim.setId();
    salim.getId();*/
    employee fb[4];
    for(int i=0; i<4; i++)
    {
        fb[i].setId();
        fb[i].getId();
    }
    return 0;
}