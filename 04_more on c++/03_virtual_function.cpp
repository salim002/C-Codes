#include<iostream>
using namespace std;

class base{
    public:
        int var_base = 1;
        virtual void display(){
            cout<<"1.Displaying base class variable var_base: "<<var_base<<endl;
        }
};

class derived :public base{
    public:
        int var_derived = 2;
        void display(){
            cout<<"2.Displaying base class variable var_base: "<<var_base<<endl;
            cout<<"2.Displaying derived class variable var_base: "<<var_derived<<endl;
        }
};

int main(){
    base *base_class_pointer;
    base obj_base;
    // obj_base.display();
    derived obj_derived;
    base_class_pointer = &obj_derived;

    base_class_pointer->display(); //display function of derived will be executed

    base *p = new base;
    // p->display();  //display function of base class will be executed

    
    return 0;
}