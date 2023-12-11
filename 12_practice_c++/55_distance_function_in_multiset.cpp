#include<bits/stdc++.h>
using namespace std;

int main(){
    multiset<int> st = {4, 3, 6, 1, 3, 7, 9, 6, 3, 2, 7};
    for(auto it:st){
        cout<<it<<" ";
    }
    cout<<endl;
    cout<<distance(st.lower_bound(3), st.upper_bound(3))<<endl;
    // cout<<distance(st.upper_bound(3), st.lower_bound(3))<<endl; // it won't work;
    cout<<distance(st.upper_bound(3), st.end())<<endl;
    cout<<distance(st.upper_bound(9), st.end())<<endl;
    cout<<distance(st.begin(), st.lower_bound(7))<<endl;
    cout<<distance(st.begin(), st.end())<<endl;
    return 0;
}