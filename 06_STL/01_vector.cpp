#include<iostream>
#include<vector>
using namespace std;

template <class T>
void display(vector <T> &v){
    cout<<"Displaying this vector: ";
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
        //cout<<v.at(i)<<" "; //We can also use this method
    }
    cout<<endl;
}

int main(){
    
    vector<int> vect1;  //Zero length integer vector
    vector<char> vect2(4);  //4-element charactor vector
    vector<char> vect3(vect2); //4_element charactor vector from vect2
    vector<int> vect4(6, 13); //6-element vector of 13s
    int element,size=5;
    vect2.push_back('A');
    vect1.push_back(5);
    vect1.push_back(15);
    vect1.push_back(25);
    vect1.push_back(35);
    vector<int> vect5 = move(vect1); // move all elements of vect1 in vect5 and vect1 becomes empty
    // display(vect1);
    // vect1.emplace_back(50);
    // auto it = vect1.begin();
    // vect1.emplace(it, 55);
    // advance(it, 3);
    // vect1.emplace(it, 55);
    // display(vect1);
    //display(vect2);
    //display(vect3);
    //display(vect4);
    /*for(auto it:vect4)    //Short method for printing vector element
        cout<<it<< " ";*/
    
    //cout<<vect4.size()<<endl;

    /*cout<<"Enter the size of the vector: ";
    cin>>size;
    for(int i=0; i<size; i++){
        cout<<"Enter the element to add to this vector: ";
        cin>>element;
        vect1.push_back(element); //Push the element to to the vector

    }*/
    //display(vect1);
    //vect1.pop_back(); //Pop one element from the vector at once

    display(vect1);
    // vector<int> :: iterator iter = vect1.begin();
    auto iter = vect1.begin();
    // vect1.erase(iter);
    // vect1.insert(iter, 566);
    // vect1.emplace(iter, 566);
    // vect1.insert(iter+1, 55);
    // vect1.emplace(iter+1, 55);
    // vect1.insert(iter+2,5, 75);
    // vect1.emplace(iter+2,5, 75);  //We can't do thid using emplace function
    // vect1.insert(iter+1,5, 566); //Prints 5 copies of 566
    display(vect1);
    return 0;
}