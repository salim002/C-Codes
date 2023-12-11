#include<bits/stdc++.h>
using namespace std;

bool isSorted(vector<int> v, int ind){
    if(ind==v.size()-1){
        return true;
    }
    return v[ind]<=v[ind+1] && isSorted(v, ind+1);
}

int main(){
    vector<int> v={1, 3, 5, 6, 8, 9};
    cout<<isSorted(v, 0)<<endl;
    return 0;
}