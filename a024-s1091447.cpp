#include <iostream>
#include <algorithm>
using namespace std;

int gcd(int, int);

int main()
{
    int num1, num2;
    while (cin >> num1 >> num2)
    {
        cout << gcd(num1, num2) << endl;
    }
}

int gcd(int num1, int num2)
{
    int r = 0;
    while (num2 != 0) 
    {
        r = num1 % num2;
        num1 = num2;
        num2 = r;
    }
    return num1;
}