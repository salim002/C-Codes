#include<iostream>
using namespace std;

// Destructor never takes an arguement nor it returns any value

class student{
    public:
    student(){
        cout<<"Costructor is called"<<endl;
    }
    ~student(){
        cout<<"Destructor is called"<<endl;
    }
};

int main(){
    student s; // Destructor will be called for this
    student *s2 = new student; // Destructor won't be called for this
    student *s3 = new student;
    delete s3;
    return 0;
}