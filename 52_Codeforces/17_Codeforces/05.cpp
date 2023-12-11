// B. XY sequence

#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n, b, x, y;
        cin>>n>>b>>x>>y;
        long long int sum=0, highest_sum = 0;
        for(int i=0; i<n; i++){
            if((sum+x)<=b){
                sum+=x;
                highest_sum += sum;
            }
            else{
                sum-=y;
                highest_sum += sum;
            }
        }
        cout<<highest_sum<<endl;
    }
    return 0;
}