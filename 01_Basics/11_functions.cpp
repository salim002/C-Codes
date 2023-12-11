#include<iostream>
using namespace std;

void g(); // Function prototype

int main(){
    g();    // Function call
    return 0;
}

void g()    // Function definition
{
    cout<<"Hello, Good morning!"<<endl;
}
