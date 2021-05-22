#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>
#include <iomanip>
using namespace std;

int main()
{
	int t;
	double x[4], y[4], sum_x, sum_y;

	while (cin >> x[0] >> y[0])//¿é¤J´ú¸ê 
	{
		sum_x = x[0];
		sum_y = y[0];

		for (int i = 1; i < 4; i++)
		{
			cin >> x[i] >> y[i];
			sum_x += x[i];
			sum_y += y[i]; 
		}

		for (int i = 0; i < 4; i++)
		{
			for (int j = i + 1; j < 4; j++)
			{
				if (x[i] == x[j] && y[i] == y[j])
				{
					cout << fixed << setprecision(3);
					cout << sum_x - 3 * x[i] << " "<< sum_y - 3 * y[i] << endl;
				}
			}
		}
	}
}
