#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
#include<sstream>
using namespace std;

int main()
{
    int x, an[1000] = {0};
    string a;
    while (cin >> x)
    {
        long long int an[1000] = { 0 }, ans = 0;
        long long int exp = 1;
        getline(cin, a);
        getline(cin, a);
        int max = 0, i = 0, temp;
        stringstream ss(a);
        while (ss >> temp)               
            an[i++] = temp;
        if (i == 0)
            cout << 0 << endl;
        else {
            for (int j = i - 2; j >= 0; j--) /*1 -1    an[1]*(2-1-1)*1  +an[0]*(2-1)7 */
            {
                ans += an[j] * (i - j - 1) * exp;
                exp *= x;
            }
        }
        cout << ans << endl;
    }
}