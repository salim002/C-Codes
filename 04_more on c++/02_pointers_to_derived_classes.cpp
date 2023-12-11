#include<iostream>
using namespace std;

class base{
    public:
        int var_base;
        void display(){
            cout<<"Displaying base class variable var_base: "<<var_base<<endl;
        }
};

class derived :public base{
    public:
        int var_derived;
        void display(){
            cout<<"Displaying base class variable var_base: "<<var_base<<endl;
            cout<<"Displaying derived class variable var_base: "<<var_derived<<endl;
        }
};

int main(){
    base *base_class_pointer;
    base obj_base;
    derived obj_derived;
    base_class_pointer = &obj_derived; //Pointing base class pointer to drived class object
    base_class_pointer->var_base = 34;
    //base_class_pointer->var_derived = 50; //Will throw an error
    // base_class_pointer->display();

    derived *derived_class_pointer = &obj_derived;
    derived_class_pointer->var_derived = 98;
    derived_class_pointer->display();
    return 0;
}