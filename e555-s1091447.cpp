#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    long long int s, d;
    while (cin >> s >> d && s != 0)
    {
        while (d - s >= 0)
        {
            d -= s;
            if (d > 0)
                s++;
        }
        cout << s << endl;
    }
}