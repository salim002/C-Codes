#include<iostream>
using namespace std;

template <class T>
class salim{
    public:
        T data;
        salim(T a){
            data = a;
        }
        /*void display(){
            cout<<data<<endl;
        }*/
        void display();
};

template <class T>
void salim<T>::display(){
    cout<<data<<endl;
}

void func(int a){
    cout<<"I am first func(): "<<a<<endl;
}

template <class T>
void func(T a){
    cout<<"I am tempetized func(): "<<a<<endl;
}


int main(){

    salim <int> s(10);
    // salim <char> s('A');
    cout<<s.data<<endl;
    s.display();
    
    // func(4);
    // func(4.2);

    return 0;
}
