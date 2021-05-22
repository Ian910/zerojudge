#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>
#include <iomanip>
#include <sstream>
using namespace std;



int main() 
{
    int list[21] = { 0,1,2,3,4,5,6,7,8,9,153,370,371,407,1634,8208,9474,54748,92727,93084,548834 };
    int num1, num2;
    while (cin >> num1 >> num2)
    {
        int result[21] = { 0 };
        int ans = 0;
        for (int i = 0; i < 21; i++)
        {
            if (list[i] >= num1 && list[i] <= num2)
            {
                result[ans]=list[i];
                ans++;
            }
        }
        if (ans == 0)
            cout << "none" << endl;
        else 
        {
            if (num1 == 0)
                cout << 0 << " ";
            for (int i = 0; i < 21; i++)
            {
                if (result[i] != 0)
                {
                    if (ans != 1)
                        cout << result[i] << " ";
                    else
                        cout << result[i] << endl;
                }
                ans--;
            }
        }
    }
}