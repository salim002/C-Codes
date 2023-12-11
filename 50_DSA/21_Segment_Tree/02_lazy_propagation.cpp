#include<bits/stdc++.h>
using namespace std;

vector<int> seg(4*100005), lazy(4*400005);

void rangeUpdate(int idx, int low, int high, int l, int r, int val){
    if(!lazy[idx]){
        seg[idx]+=(high-low+1)*lazy[idx];
        if(left!=right){
            lazy[2*idx+1]+=lazy[idx];
            lazy[2*idx+1]+=lazy[idx];
        }
        lazy[idx]=0;
    }
    if(high<l || low>r || low>high){
        return;
    }
    if(low>=l && high<=r){
        seg[idx]+=(high-low+1)*val;
        if(low!=high){
            lazy[2*idx+1] += val;
            lazy[2*idx+2] += val;
        }
        return;
    }
    int mid=(low+high)/2;
    rangeUpdate(2*idx+1, low, mid, l, r, val);
    rangeUpdate(2*idx+2, mid+1, high, l, r, val);
    seg[idx] = seg[2*idx+1]+seg[2*idx+2];
}

int querySumLazy(int idx, int low, int high, int l, int r){
    if(lazy[idx]!=0){
        seg[idx] += (high-low+1)*lazy[idx];
        if(low!=high){
            lazy[2*idx+1]+=lazy[idx];
            lazy[2*idx+2]+=lazy[idx];
        }
        lazy[idx]=0;
    }
    if(low>r || high<l || low>high){
        return 0;
    }
    if(low>=r && high<=r){
        return seg[idx];
    }
    int mid = (l+r)/2;
    return querySumLazy(2*idx+1, low, mid, l, r)+querySumLazy(2*idx+2, mid+1, high, l, r);
}

int main(){

    return 0;
}