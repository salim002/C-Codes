#include<bits/stdc++.h>
#include<iostream>
#include<utility>
using namespace std;

int main(){
    pair<int, int> p;
    pair<int, char> p1(1, 'a');
    pair<int, int> p2(1, 10);
    pair<int, int> p3(p2); // Copy of p2
    pair<int, int> p5 = {5, 15};

    pair<string, int> p4;
    // p4 = make_pair("salim", 2);
    p4 = {"salim", 2};

    // cout<<p.first<<" "<<p.second<<endl;
    // cout<<p1.first<<" "<<p1.second<<endl;
    // cout<<p2.first<<" "<<p2.second<<endl;
    // cout<<p3.first<<" "<<p3.second<<endl;
    // cout<<p4.first<<" "<<p4.second<<endl;

    // p1.swap(p2);  //It will give error because only same data type pairs can be swapped
    // p2.swap(p5);
    // cout<<p2.first<<" "<<p2.second<<endl;
    // cout<<p5.first<<" "<<p5.second<<endl;

    // int a, b;
    // tie(a, b) = p2;
    // cout<<a<<" "<<b<<endl;
    // tie(a, ignore) = p5;
    // cout<<a<<" "<<b<<endl;
    // tie(ignore, ignore) = p4;
    // cout<<a<<" "<<b<<endl;

    pair<int, pair<int, char>> p6 = {10, {50, 'a'}};
    cout<<p6.first<<" "<<p6.second.first<<" "<<p6.second.second<<endl;
    int x, y;
    char z;
    x = p6.first;
    tie(y, z) = p6.second;
    cout<<x<<" "<<y<<" "<<z<<endl;

    return 0;
}