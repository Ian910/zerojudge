#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

int gcd(int a, int b)
{
    if (b == 0) return a;
    else return gcd(b, a % b);
}

int main()
{
    int a, b;
    while (cin >> a >> b)
    {
        cout << gcd(a, b) << endl;
    }
       
}