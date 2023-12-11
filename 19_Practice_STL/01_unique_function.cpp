#include<bits/stdc++.h>
using namespace std;

int main(){
    std::vector<int> numbers = {1, 2, 2, 3, 3, 3, 4, 4, 5, 6, 6, 6, 6, 5, 5, 5};
    for(auto it: numbers) cout<<it<<" ";
    cout<<endl;

    auto newEnd = unique(numbers.begin(), numbers.end());
    cout<<*newEnd<<endl;

    numbers.erase(newEnd, numbers.end());

    for(auto it: numbers) cout<<it<<" ";
    cout<<endl;

    return 0;
}