#include<iostream>
#include<list>
using namespace std;

void display(list<int> &lst){
    list<int> :: iterator it;
    for(it=lst.begin(); it!=lst.end(); it++){
        cout<< *it<<" ";
    }
    cout<<endl;
}

int main(){
    list<int> list1;    //List of zero length

    list1.push_back(5);
    list1.push_back(12);
    list1.push_back(7);
    list1.push_back(4);
    list1.push_back(7);
    list1.push_front(4);
    list1.emplace_back(15);
    list1.emplace_front(1);
    display(list1);

    // list<int> :: iterator iter;
    // iter = list1.begin();
    // cout<< *iter++<<" ";
    // // iter++;
    // cout<< *iter++<<" ";
    // // iter++;
    // cout<< *iter++<<" ";
    // // iter++;
    // cout<< *iter++<<" ";
    // // iter++;
    // cout<< *iter++<<" ";

    // display(list1);
    // list1.pop_back(); //remove an element from right side
    // list1.pop_front(); //remove an element from left side
    // list1.remove(7); //Removes all occurences of 7 from the list
    // auto it = list1.begin();
    // advance(it, 4); 
    // list1.erase(it); //removes only a element where 'it' is pointed
    // list1.sort();   //sort the list
    // display(list1);

    // list<int> list2(3); //Empty list of size 3
    // list<int> :: iterator iter;
    // iter = list2.begin();
    // *iter = 45;
    // iter++;
    // *iter = 62;
    // iter++;
    // *iter = 35;
    // display(list2);
    // list1.merge(list2); //Merges list2 at the end of list1;
    // cout<<"List1 after merging: ";
    // display(list1);
    // display(list2); //It will print nothing Since list2 has been merged to list1 
    // list1.sort();   //Sorts list1
    // display(list1);

    // list<int> :: iterator iter = list1.begin();
    // // advance(iter,2);
    // list1.insert(iter, 11);
    // list1.insert(iter,15);
    // list1.insert(iter,5,18);
    // list<int> :: iterator it = list1.begin();
    // auto it = list1.begin();
    // advance(it,2);  //It will advance the iterator to index 2
    // list1.emplace(it, 50);
    // display(list1);
    // list1.emplace_back(15);
    // display(list1);
    // list1.emplace_front(20);
    // list1.push_front(50);
    // display(list1);
    



    return 0;
}