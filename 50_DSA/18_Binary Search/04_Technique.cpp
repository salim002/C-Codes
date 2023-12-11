// To find the target number in a sorted array or if it is not present return the greatest number smaller than target

#include<bits/stdc++.h>
using namespace std;

int func(vector<int> v, int target){
    int l=0, r=v.size()-1;
    while(l<=r){
        int mid=(l+r)/2;
        if(v[mid]<=target){
            l=mid+1;
        }
        else{
            r=mid-1;
        }
    }
    return v[l-1];
}

int main(){
    vector<int> v{3, 5, 8, 9, 13, 15, 17};
    int target;
    cin>>target;
    cout<<func(v, target)<<endl;
    return 0;
}