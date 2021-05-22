#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>
#include <iomanip>
using namespace std;


int biger(int a[], int b[])
{
    for (int i = 10000; i >= 0; --i)
        if (a[i] != b[i])
            return a[i] > b[i];
    return 0;
}

int main() 
{
    int num_cs;
    string str1, str2;
    cin >> num_cs;
    for (int i = 0; i < num_cs; i++)
    {
        int num1[10001] = { 0 }, num2[10001] = { 0 }, ans[10001] = { 0 };
        cin >> str1 >> str2;

        int len1 = str1.length();
        for (int j = 0; j < len1; j++)
            num1[j] = str1[len1 - 1 - j] - '0';
        int len2 = str2.length();
        for (int j = 0; j < len2; j++)
            num2[j] = str2[len2 - 1 - j] - '0';
        int ct_len = 0;
        if (biger(num2, num1))
        {
            cout << "-";
            ct_len = len2;
            for (int i = 0; i < len2; ++i)
            {
                ans[i] += num2[i] - num1[i];
                if (ans[i] < 0) 
                {
                    ans[i] += 10;
                    ans[i + 1] --;
                }
            }
        }
        else {
            ct_len = len1;
            for (int i = 0; i < len1; ++i) 
            {
                ans[i] += num1[i] - num2[i];
                if (ans[i] < 0) 
                {
                    ans[i] += 10;
                    ans[i + 1] --;
                }
            }
        }
        while (ct_len > 0 && !ans[ct_len])
            --ct_len;
        while (ct_len >= 0) 
            cout<<(ans[ct_len--]);
        cout << endl;
    }
}