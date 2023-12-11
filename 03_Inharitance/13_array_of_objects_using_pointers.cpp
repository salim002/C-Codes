#include<iostream>
using namespace std;

class store{
    int id;
    float price;
    public:
        void setData(int a, float b){
            id = a;
            price = b;
        }
        void getData(){
            cout<<"id of the item is "<<id<<endl;
            cout<<"and it's price is "<<price<<endl;
        }
};

int main(){
    int size,i,p,q;
    cout<<"Enter the size: "<<endl;
    cin>>size;
    store *ptr = new store[size];
    store *temp = ptr;

    for(i=0; i<size; i++){
        cout<<"Enter the id and price of item: "<<endl;
        cin>>p>>q;
        ptr->setData(p,q);
        ptr++;
    }
    for(i=0; i<size; i++){
        temp->getData();
        temp++;
    }

    return 0;
}