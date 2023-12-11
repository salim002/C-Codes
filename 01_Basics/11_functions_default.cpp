#include<iostream>
using namespace std;


float moneyRecieved(int currentMoney, float factor = 1.04) // default arguements should be in right
{
    return currentMoney*factor;
}

int main(){
    int money =100000;
    cout<<"Your current money is "<<money<<" so you will recieve "<<moneyRecieved(money)<<
    " Rs. after 1 year"<<endl;
    cout<<"Your current money is "<<money<<" and you are a VIP, so you will recieve "
    <<moneyRecieved(money,1.1)<<" Rs. after 1 year"<<endl;
    return 0;
}