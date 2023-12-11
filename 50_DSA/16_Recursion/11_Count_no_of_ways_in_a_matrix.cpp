#include<bits/stdc++.h>
using namespace std;

int count(int r, int c){
    if(r==1 || c==1){
        return 1;
    }
    int left = count(r-1, c);
    int right = count(r, c-1);
    return left+right;
}

void path(string p, int r, int c){
    if(r==1 && c==1){
        cout<<p<<endl;
        return;
    }
    if(r>1){
        path(p+'D', r-1, c);
    }
    if(c>1){
        path(p+'R', r, c-1);
    }
}

list<string> pathList(string p, int r, int c){
    list<string> list;
    if(r==1 && c==1){
        list.push_back(p);
        return list;
    }
    if(r>1){
        list.merge(pathList(p+'D', r-1, c));
    }
    if(c>1){
        list.merge(pathList(p+'R', r, c-1));
    }
    return list;
}

void pathDiagonal(string p, int r, int c){
    if(r==1 && c==1){
        cout<<p<<endl;
        return;
    }
    if(r>1 && c>1){
        pathDiagonal(p+'D', r-1, c-1);
    }
    if(r>1){
        pathDiagonal(p+'V', r-1, c);
    }
    if(c>1){
        pathDiagonal(p+'H', r, c-1);
    }
}

int main(){
    int r, c;
    cin>>r>>c;
    // cout<<count(r, c)<<endl;
    // path("", r, c);
    // list<string> v = pathList("", r, c);
    // for(auto it:v){
    //     cout<<it<<" ";
    // }
    // cout<<endl;
    pathDiagonal("", r, c);
    return 0;
}