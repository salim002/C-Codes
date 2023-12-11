#include<iostream>
#include<list>
using namespace std;

void display(list<int> &lst){
    for(auto i:lst){
        cout<<i<<" ";
    }
    cout<<endl;
}

int main(){
    list<int> l1 = {2, 5, 6, 9, 12};
    list<int> l2 = {20, 40, 60, 80, 100};

    list<int> :: iterator it = l1.begin();
    
    display(l1);
    display(l2);
    // advance(it, 3);
    // l1.splice(it, l2); //Insert all elements of l2 into l1 and l2 becomes empty
    // it = l1.end();
    // l1.splice(it, l2);
    // l1.merge(l2);
    display(l1);
    display(l2);
    return 0;
}