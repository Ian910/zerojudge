#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>
#include <iomanip>
using namespace std;

int main()
{
	int n,m,count=1;

	while (cin >> n >> m)
	{
		if (n == m && n == 0)
			break;
		char cs[103][103] = { "" };

		for (int i = 1; i <= n; i++)
		{	
			for (int j = 1; j <= m; j++)
			{
				cin >> cs[i][j];
				if (cs[i][j] == '*')
					cs[i][j] = '9';
				else
					cs[i][j] = '0';
			}
		}

		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= m; j++)
			{
				if (cs[i][j] >= '9')
				{
					cs[i+1][j+1]++;
					cs[i+1][j]++;
					cs[i+1][j-1]++;
					cs[i][j+1]++;
					cs[i][j-1]++;
					cs[i-1][j+1]++;
					cs[i-1][j]++;
					cs[i-1][j-1]++;
				}
			}
		}
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= m; j++)
			{
				if (cs[i][j] >= '9')
				{
					cs[i][j] = '*';
				}
			}
		}
		
		cout << "Field #" << count << ":" << endl;
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= m; j++)
			{
					cout << cs[i][j];

			}
			cout << endl;
		}
		cout << endl;
		count++;
	}
}