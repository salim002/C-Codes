#include<iostream>
using namespace std;

int fab(int n)
{   if(n==1){
        return 0;
    }
    else if(n==2){
        return 1;
    }
    return fab(n-1) + fab(n-2);
}

int main(){
    int a;
    cout<<"Enter a number"<<endl;
    cin>>a;
    for(int i=1; i<=a; i++){
        cout<<fab(i)<<" ";
    }
    cout<<endl;
    cout<<"The term in fibonacci sequence at position "<<a<<" is "<<fab(a);
    return 0;
}