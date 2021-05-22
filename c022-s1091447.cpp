#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
#include<sstream>
using namespace std;

int main()
{
    int case_num,a,b;
    cin >> case_num;
    for (int i = 0; i < case_num; i++)
    {
        int sum = 0,temp;
        cin >> a;
        cin >> b;
        if (a > b)
        {
            temp = a;
            a = b;
            b = temp;
        }
        for (int j = a; j <= b; j++)
        {
            if (j % 2 != 0)
                sum += j;
        }
        cout <<"Case "<<i+1<<": "<< sum << endl;
    }
}