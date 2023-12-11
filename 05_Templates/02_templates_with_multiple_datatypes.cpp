#include<iostream>
using namespace std;
template <class T1,class T2>
class myclass{
    public:
    T1 data1;
    T2 data2;
    myclass(T1 a, T2 b){
        data1 = a;
        data2 = b;
    }
    void displayData(){
        cout<<data1<<endl<<data2<<endl;
    }
};

int main(){
    myclass <int, float>c1(2, 1.8);
    c1.displayData();
    return 0;
}