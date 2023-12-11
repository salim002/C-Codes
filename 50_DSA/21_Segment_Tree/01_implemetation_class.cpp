#include<bits/stdc++.h>
using namespace std;

class segmentTree{
    public:
    vector<int> a, seg;
    segmentTree(vector<int> v){
        a=v;
        int n=v.size();
        seg.resize(4*n+1);
        build(0, 0, n-1);
    }
    void build(int idx, int low, int high){
        if(low==high){
            seg[idx]=a[low];
            return;
        }
        int mid=(low+high)/2;
        build(2*idx+1, low, mid);
        build(2*idx+2, mid+1, high);
        seg[idx]=max(seg[2*idx+1], seg[2*idx+2]);
    }
    int queryHelper(int idx, int low, int high, int l, int r){
        if(l<=low && r>=high){
            return seg[idx];
        }
        if(low>r || high<l){
            return INT_MIN;
        }
        int mid = (low+high)/2;
        int left = queryHelper(2*idx+1, low, mid, l, r);
        int right = queryHelper(2*idx+2, mid+1, high, l, r);
        return max(left, right);
    }
    int query(int l, int r){
        return queryHelper(0, 0, a.size()-1, l, r);
    }
};


int main(){
    vector<int> v = {5, 3, 8, 8, 3, 2, 9, 5, 4, 3, 7};
    segmentTree sgt(v);
    cout<<sgt.query(1, 5)<<endl;

    return 0;
}