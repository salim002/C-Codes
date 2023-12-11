#include<bits/stdc++.h>
using namespace std;

class student{
    int health;
    public: 
    char* name;
    char level;
    student(){
        // cout<<"Simple constructor called"<<endl;
        name = new char[100];
    }
    student(int health){
        this->health=health;
    }
    student(int health, char level){
        this->health=health;
        this->level=level;
    }
    student(student &other){
        char* ch = new char[strlen(other.name)+1];
        strcpy(ch, other.name);
        this->name=ch;
        this->health=other.health;
        this->level=other.level;
    }
    ~student(){ // Destructor only called for objects which are static allocated
        cout<<"Destructor called"<<endl;
    }
    int getHealth(){
        return health;
    }
    char getLevel(){
        return level;
    }
    void setHealth(int h){
        health=h;
    }
    void setLevel(char ch){
        level=ch;
    }
    void setName(char name[]){
        strcpy(this->name, name);
    }
    void print(){
        cout<<"[ name: "<<name<<", health: "<<health<<", level: "<<level<<" ]"<<endl;
    }
};

int main(){
    student a;
    a.setHealth(12);
    a.setLevel('D');
    char name[7]="Babbar";
    a.setName(name);
    a.print();
    
    student b(a);
    b.print();
    cout<<endl;
    a.name[0]='G';
    a.print();
    b.print();

    // dynamic allocation
    student * c  = new student; // Destructor won't be called
    student * d = new student; // to call the destructor for this we have to manually call destructor
    delete c; // Manually calling destructor

    // static allocation
    // student e, f, g; // Destructor will be called 

    return 0;
}