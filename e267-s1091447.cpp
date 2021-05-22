#include<iostream>
#include<string>
using namespace std;
int main()
{
    int num, len;
    string str;
    while (cin >> num)
    {
        if (num == 0)
            break;
        cin >> str;
        len = str.length() / num;/*6 3 2*/
        for (int i = 0; i < str.length() - (str.length() % num); i += len)
        {
            for (int j = len + i - 1; j >= i; j--)
            {
                cout << str[j];
            }
        }
        if (str.length() % num != 0)
        {
            for (int i = 0; i < str.length() % num; i++)
                cout << str[str.length() - i - 1];
        }
        cout << endl;
    }
}