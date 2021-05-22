#include<iostream>
#include<algorithm>
#include<cmath>
#include<string>
using namespace std;

int main()
{
    string str;
    while (cin >> str)
    {
        int i = 1;
        if (str[0] != '-')
            cout << str<<endl;
        else
        {
            while (i < str.length())
            {
                cout << str[i];
                i++;
            }
            cout << endl;
        }
    }
       
}