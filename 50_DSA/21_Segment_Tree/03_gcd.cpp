#include<bits/stdc++.h>
using namespace std;

vector<int> a(100005), seg(4*100005);

void build(int idx, int low, int high){
    if(low==high){
        seg[idx]=a[low];
        return;
    }
    int mid=(low+high)/2;
    build(2*idx+1, low, mid);
    build(2*idx+2, mid+1, high);
    seg[idx]=__gcd(seg[2*idx+1], seg[2*idx+2]);
}

int query(int idx, int low, int high, int l, int r){
    if(l<=low && r>=high){
        return seg[idx];
    }
    if(low>r || high<l){
        return 0;
    }
    int mid = (low+high)/2;
    int left = query(2*idx+1, low, mid, l, r);
    int right = query(2*idx+2, mid+1, high, l, r);
    return __gcd(left, right);
}

int main(){
    // int n;
    // cin>>n;
    // for(int i=0; i<n; i++){
    //     cin>>a[i];
    // }
    vector<int> v = {5, 2, 8, 8, 4, 2, 9, 5, 4, 3, 7};
    int n=v.size();
    for(int i=0; i<n; i++){
        a[i]=v[i];
    }
    build(0, 0, n-1);
    int q;
    cin>>q;
    while(q--){
        int l, r;
        cin>>l>>r;
        // if(r<l){
        //     swap(r, l);
        // }
        cout<<query(0, 0, n-1, l, r)<<endl;
    }

    return 0;
}