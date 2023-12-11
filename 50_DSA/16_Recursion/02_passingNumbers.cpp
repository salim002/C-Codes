#include<bits/stdc++.h>
using namespace std;

void fun(int n){
    if(n==0){
        return;
    }
    cout<<n<<endl;
    // fun(n--); //Infinite recursion
    fun(--n);
}

int main(){
    int n=5;
    fun(n);

    return 0;
}