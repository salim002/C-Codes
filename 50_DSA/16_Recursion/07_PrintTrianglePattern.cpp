#include<bits/stdc++.h>
using namespace std;

void triangle(int r, int c){
    if(r==0){
        return;
    }
    if(c<r){
        cout<<"*"<<" ";
        triangle(r, c+1);
    }
    else{
        cout<<endl;
        triangle(r-1, 0);
    }
}

void triangle2(int r, int c){
    if(r==0){
        return;
    }
    if(c<r){
        triangle2(r, c+1);
        cout<<"*"<<" ";
    }
    else{
        triangle2(r-1, 0);
        cout<<endl;
    }
}

int main(){
    int r;
    cin>>r;
    triangle(r, 0);
    // triangle2(r, 0);
    return 0;
}