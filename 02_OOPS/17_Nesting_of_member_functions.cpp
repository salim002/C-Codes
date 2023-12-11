#include <iostream>
#include <string>
using namespace std;

class binary
{
    string s;
    void ones_complement(void);
    public:
        void read(void);
        void display(void);
        void chk_binary(void);

};
void binary :: read(void)
{
    cout << "Enter a binary number: ";
    cin >> s;
    chk_binary();
}
void binary :: chk_binary(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')  //We can also use s[i] instead of s.at(i) 
        {
            cout << "Incorrect binary format" << endl;
            exit(0);
        }
    }
    display();
}

void binary :: ones_complement(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
    cout<<"Ones complement of entered binary number is: ";
    for(int i=0; i<s.length(); i++)
    {
        cout<<s.at(i);
    }
    cout<<endl;
}   

void binary :: display(void)
{
    cout << "Displaying your binary number: ";
    for (int i = 0; i<s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
    ones_complement();
}
int main()
{   class binary a;
    a.read();
    //a.chk_binary();
    //a.display();
    //a.ones_complement();
    return 0;
}