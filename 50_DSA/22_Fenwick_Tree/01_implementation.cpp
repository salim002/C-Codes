#include<bits/stdc++.h>
using namespace std;

class fenwickTree{
    public:
    vector<int> fen;
    int n;
    fenwickTree(vector<int> v){
        n=v.size();
        fen.resize(n+1);
        for(int i=0; i<n; i++){
            update(i+1, v[i]);
        }
    }
    void update(int i, int val){
        while(i<=n){
            fen[i]+=val;
            i += (i & (-i));
        }
    }
    int sum(int i){
        int s=0;
        while(i>0){
            s+=fen[i];
            i -= (i & (-i));
        }
        return s;
    }
};

int main(){
    vector<int> v = {3, 4, 1, 6, 7, 2, 3, 5, 4};
    fenwickTree ft(v);
    int q;
    cin>>q;
    while(q--){
        int l, r;
        cin>>l>>r;
        cout<<ft.sum(r)-ft.sum(l-1)<<endl;
    }
    return 0;
}