#include<bits/stdc++.h>
using namespace std;

class hero{
    int a, b;
    public:
    hero(){
        cout<<"Constructor called!"<<endl;
    }
};

int main(){
    cout<<"Hi"<<endl;
    // hero h;
    hero * h = new hero();
    cout<<"Hello"<<endl;
    return 0;
}