#include<bits/stdc++.h>
using namespace std;

int main() {
    // long long x = __LONG_LONG_MAX__;
    // cout<<x<<endl;

    // long long x = RAND_MAX;
    // cout<<x<<endl;

    // srand(time(0));
    // int randNum = rand();
    // cout<<randNum<<endl;

    // random_device rd;
    // uniform_int_distribution<int> gen(0, 100);
    // int randNum = gen(rd);
    // cout<<randNum<<endl;
    // for(int i=0; i<10; i++){
    //     int randNum = gen(rd);
    //     cout<<randNum<<endl;
    // }


    // To get more randomness
    random_device rd; // random number generator
    mt19937 gen(rd()); // Mersenne Twister engine
    uniform_int_distribution<int> distribution(0, 100);
    // uniform_int_distribution<int> distribution; // No specified range
    int rnadomNumber = distribution(gen);
    cout<<rnadomNumber<<endl;

    return 0;
}
