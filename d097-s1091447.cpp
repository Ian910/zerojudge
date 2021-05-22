#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    int n, tmp;

    while (cin >> n)
    {
        if (n == 1) 
        {
            cin >> tmp;
            cout << "Jolly" << endl;
        }
        else 
        {
            int a[3000];
            int b[3000];

            for (int i = 0; i < n; i++)
            {
                b[i] = 0;
            }

            for (int i = 0; i < n; i++)
            {
                cin >> a[i];

                if (i != 0)
                {
                    b[abs(a[i - 1] - a[i])] = 1;
                }
            }

            for (int i = 1; i < n; i++)
            {
                if (b[i] == 0)
                {
                    cout << "Not jolly" << endl;
                    break;
                }
                if (i == n - 1)
                {
                    cout << "Jolly" << endl;
                }
            }
        }
    }
}