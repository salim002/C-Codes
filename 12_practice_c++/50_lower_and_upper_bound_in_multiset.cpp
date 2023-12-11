#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v={1, 3, 4, 4, 4, 5, 7, 7, 7, 7, 8, 9, 10};
    // int idx=upper_bound(v.begin(), v.end(), 7)-v.begin();
    // cout<<idx<<endl;
    multiset<int> st(v.begin(), v.end());
    // auto idx = st.lower_bound(6);
    // auto idx = st.lower_bound(7);
    // auto idx = st.upper_bound(6);
    auto idx = st.upper_bound(7);
    cout<<*idx<<endl;

    return 0;
}