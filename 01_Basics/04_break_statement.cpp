#include<iostream>
using namespace std;

int main(){
    for(int i=0; i<10; i++){
        cout<<i<<endl;
        if(i==2){
            break; //Prints 2 and break the loop
        }
    }
    
    cout<<endl;

    for(int i=0; i<10; i++){
        
        if(i==2){
            break; //Does not print 2 and break the loop
        }
        cout<<i<<endl;
    }
    

    return 0;
}