#include<iostream>
#include<algorithm>
#include<cmath>
#include<string>
#include<iomanip>
using namespace std;

int main()
{
	int n, m;
	while (cin >> n >> m)
	{
		if (n == m && n == 0)
			break;
		if (n - m < m)
			m = n - m;
		double ans = 1;
		for (int i = n; i > n - m; i--)
		{
			ans *= i;
			ans /= (i + m - n);
		}
		printf("%.0lf\n", ans);
	}
}