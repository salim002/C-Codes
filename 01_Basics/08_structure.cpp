#include<iostream>
using namespace std;


typedef struct employee //by using typedef we can use 'ep' instead of 'struct employee'
    {
        int Id;
        char favChar;
        float salery;
    }ep;

int main(){
    ep salim;
    struct employee shubham;
    struct employee rohan;
    salim.Id = 02;
    salim.favChar = 's';
    salim.salery = 4000000;
    cout<<"The value is "<<salim.Id<<endl;
    cout<<"The value is "<<salim.favChar<<endl;
    cout<<"The value is "<<salim.salery<<endl;
    return 0;
}