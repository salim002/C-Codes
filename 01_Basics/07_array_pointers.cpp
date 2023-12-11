#include<iostream>
using namespace std;

int main(){
    int marks[] = {70,80,90,100};
    // cout<<"The value of marks[0] is "<<marks[0]<<endl;
    // cout<<"The value of marks[1] is "<<marks[1]<<endl;
    // cout<<"The value of marks[2] is "<<marks[2]<<endl;
    // cout<<"The value of marks[3] is "<<marks[3]<<endl;

    //printing marks using pointers
    int* p = marks;
    cout<<*(p++)<<endl;
    cout<<*p;
    //cout<<"The value of marks[0] is "<<*p<<endl;
    //cout<<"The value of marks[1] is "<<*(p+1)<<endl;
    //cout<<"The value of marks[2] is "<<*(p+2)<<endl;
    //cout<<"The value of marks[3] is "<<*(p+3)<<endl;
    return 0;
}