//Program to check whether the number is present or not in a given unordered set

#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    unordered_set<int> s = {1, 2, 3, 4, 5};
    int key = 3;

    if (s.find(key) != s.end())
    {
        cout << "Element is present in the set" << endl;
    }
    else
    {
        cout << "Element not found" << std::endl;
    }

    return 0;
}