#include<iostream>
#include<algorithm>
#include<cmath>
#include<string>
#include<iomanip>
using namespace std;

int main()
{
    long long int cs[10001];
    cs[0] = 1;
    for (int i = 1; i <= 10000; i++)
    {
        int temp = i;
        while (temp % 10 == 0)
        {
            temp /= 10;
        }
        cs[i] = cs[i - 1] * temp;
        while (cs[i] % 10 == 0)
        {
            cs[i] /= 10;
        }
        cs[i] %= 1000000;
    }
    int num;
    while (cin >> num)
    {
        cout << setw(5) << num << right << " -> " << cs[num] % 10 << endl;
    }

}