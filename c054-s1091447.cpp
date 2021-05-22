#include<iostream>
#include<algorithm>
#include<cmath>
#include<string>
using namespace std;

int main()
{
    string correct = "`1234567890-QWERTYUIOP[]ASDFGHJKL;ZXCVBNM,. ";
    string error =   "1234567890-=WERTYUIOP[]\\SDFGHJKL;\'XCVBNM,./ ";
    string str1;
    while (getline(cin, str1))
    {
        for (int i = 0; i < str1.length(); i++)
        {
            for (int j = 0; j < 44; j++)
            {
                if (str1[i] == error[j])
                {
                    str1[i] = correct[j];
                    j = 43;
                }
            }
        }
        cout << str1 << endl;
    }

}