#include<iostream>
using namespace std;

int main(){
    for(int i=0; i<10; i++){
        cout<<i<<endl;
        if(i==2){
            continue; //Prints 2 and continue the loop
        }
    }
    
    cout<<endl;

    for(int i=0; i<10; i++){
        
        if(i==2){
            continue; //Does not print 2 and continue the loop
        }
        cout<<i<<endl;
    }
    

    return 0;
}