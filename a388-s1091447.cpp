#include <iostream>
#include <math.h>
using namespace std;

long long int dp[31];

int main()
{
    dp[0] = 1, dp[1] = 2, dp[2] = 4;
    for (int i = 3; i < 31; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
    }
    int a;
    while (cin >> a && a != 0 && a < 31)
    {
        long long int b = pow(2, a);
        cout << b - dp[a] << endl;
    }
}