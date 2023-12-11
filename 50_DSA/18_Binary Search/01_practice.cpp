#include<bits/stdc++.h>
using namespace std;

bool check(int k, vector<int> &arr, vector<int> &cost, int d){
    int N=arr.size();
    for(int i=0; i<k; i++){
        d -= max(0, cost[i]-arr[N-k+i]);
        if(d<0){
            return false;
        }
    }
    return true;
}

vector<int> maxCustomers(int N, int M, int d, vector<int> arr, vector<int> cost){
    sort(arr.begin(), arr.end());
    sort(cost.begin(), cost.end());
    int l=0, r=min(N, M), maxItems=0;
    while(l<=r){
        int mid = (l+r)/2;
        if(check(mid, arr, cost, d)){
            maxItems=mid;
            l = mid+1;
        }
        else{
            r=mid-1;
        }
    }
    long long sum=0;
    for(int i=0; i<maxItems; i++){
        sum+=cost[i];
    }
    int minMoney = max(0ll, sum-d);
    return {maxItems, minMoney};
}

int main(){
    int N;
    cin>>N;
    int M;
    cin>>M;
    int d;
    cin>>d;
    vector<int> arr(N), cost(M);
    for(int i=0; i<N; i++){
    	cin>>arr[i];
    }
    for(int i=0; i<M; i++){
    	cin>>cost[i];
    }
    vector<int> ans = maxCustomers(N, M, d, arr, cost);
    cout << ans[0]<<" "<<ans[1]<<endl;
    return 0;
}