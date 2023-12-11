#include<bits/stdc++.h>
using namespace std;

int number_of_steps(int x, int y){
    if(x==0 && y==0){
        return 0;
    }
    float d = sqrt(x*x + y*y);
    if(d==int(d)){
        return 1;
    }
    return 2;

}

int main(){
    int t;
    cin>>t;
    while(t--){
        int x, y;
        cin>>x>>y;
        cout<<number_of_steps(x, y)<<endl;
    }
    return 0;
}