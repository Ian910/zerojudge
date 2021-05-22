#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
#include<sstream>
using namespace std;
int main()
{
    int sum, sub, num_case;
    cin >> num_case;
    for (int i = 0; i < num_case; i++)
    {
        cin >> sum >> sub;
        if ((sum + sub) % 2 == 0 && sum >= sub && sum >= 0 && sub >= 0)
            cout << (sum + sub) / 2 << " " << abs(sum - sub) / 2 << endl;
        else
            cout << "impossible" << endl;
    }
}