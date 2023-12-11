#include<iostream>
using namespace std;

/*float avarage(int a, int b){
    float avg = (a+b)/2.0;
    return avg;
}*/

template <class T>
void swapp(T &a, T &b){
    T temp = a;
    a = b;
    b = temp;
}

template <class T1, class T2>
float avarage(T1 a, T2 b){
    float avg = (a+b)/2.0;
    return avg;
}

int main(){
    /*float a = avarage(2,7);
    cout<<a<<endl;*/

    float a = avarage(5, 2);
    cout<<a<<endl;

    int x = 7, y = 4;
    swapp(x,y);
    cout<<x<<endl<<y<<endl;
    
    return 0;
}