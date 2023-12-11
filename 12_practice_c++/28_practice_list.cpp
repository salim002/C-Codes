// Program to print list items containing all items of a given word

#include<iostream>
using namespace std;

bool find_chars(string s1, string s2){
    for(int i=0; i<s2.size(); i++){
        if(s1.find(s2[i]) == string::npos){
            return false;
        }
    }
    return true;
}

void print_items(string arr[], string word, int n){
    for(int i=0; i<n; i++){
        if(find_chars(arr[i], word)){
            cout<<arr[i]<<" ";
        }
    }
    cout<<endl;
}

int main(){
    string arr[] = {"sunday", "classes", "utencils", "college", "sud", "suddenly"};
    int n = sizeof(arr)/sizeof(arr[0]);
    string word = "sun";
    print_items(arr, word, n);
    return 0;
}