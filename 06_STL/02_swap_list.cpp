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
    list<int> l1 = {2, 5, 7, 6, 6, 9, 6, 12};
    list<int> l2 = {20, 40, 60, 80, 100};

    // l1.assign(3,500); //It will replace the list l1 into {500,500,500}

    // cout<<l1.front()<<endl;
    // cout<<l1.back()<<endl;

    display(l1);
    display(l2);

    // list<int> :: iterator it = l1.begin();
    // advance(it, 2);
    // l1.erase(it);

    // l1.remove(6); //Removes all instances of 6 from l1

    // l1.swap(l2);
    
    // l2.reverse();

    // display(l1);
    // display(l2);
    
    return 0;
}