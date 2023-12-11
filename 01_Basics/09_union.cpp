#include<iostream>
using namespace std;

union money
    {
        int rice;
        char car;
        float pound;
    };

int main(){
    union money m1;
    m1.rice = 34;
    m1.car = 'c';
    m1.pound =5.35;
    // cout<<m1.rice<<endl; //after assigning m1.car='c' it gives garbage value
    // cout<<m1.car<<endl; //After assingning m1.pound = 5.35 it gives a garbage value because m1.pound occupies the memory
    cout<<m1.pound<<endl;
    return 0;
}