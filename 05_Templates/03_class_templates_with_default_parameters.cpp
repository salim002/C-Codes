#include<iostream>
using namespace std;

template <class T1=int, class T2=float, class T3=char>

class salim{
    public:
        T1 a;
        T2 b;
        T3 c;
    salim(T1 x, T2 y, T3 z){
        a = x;
        b = y;
        c = z;
    }
    void display(){
        cout<<"The value of a is "<<a<<endl;
        cout<<"The value of b is "<<b<<endl;
        cout<<"The value of c is "<<c<<endl;
    }
};

int main(){
    /*salim<>s(4,6.4);
    s.display();*/

    salim<>g(4,6.4,'s');
    g.display();
    
    salim<int , char , char>h(5,'c','t');
    h.display();
    return 0;
}