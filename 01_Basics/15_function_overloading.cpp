#include<iostream>
using namespace std;

int sum(int a, int b){
    return a+b;
}

int sum(int a, int b, int c){
    return a+b+c;
}

float volume(int a, int b, int c){
    return a * b * c;
}
float volume(int a){
    return a * a *a;
}

float volume(int a, int b){
    return 3.14 * a * a * b;
}

int main(){
    cout<<"Sum of 5 and 10 is "<<sum(5,10)<<endl;
    cout<<"Sum of 5, 10 and 15 is "<<sum(5,10,15)<<endl;
    cout<<"Volume of cylinder of radius 5 and height 10 is "<<volume(5,10)<<endl;
    cout<<"Volume of cube of side 5 is "<<volume(5)<<endl;
    cout<<"Volume of cuboid of  bredth 5, length 10 and height 15 is "<<volume(5,10,15)<<endl;
    return 0;
}