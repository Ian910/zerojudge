#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() 
{
    int s, n, i;
    double p, q, ans;
    cin >> s;
    for (int j = 0; j < s; j++) 
    {
        cin >> n >> p >> i;

        if (p == 0)
            ans = 0;
        else
        {
            q = 1 - p;
            ans = pow(q, i - 1) * p / (1 - pow(q, n));
        }
        cout << fixed << setprecision(4) << ans << endl;
    }
}