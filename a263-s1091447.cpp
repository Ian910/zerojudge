#include <iostream>
#include <cmath>
using namespace std;

bool leap(int y)
{
	if (y % 4 != 0)
		return false;
	else
	{
		if (y % 100 != 0)
			return true;
		else
		{
			if (y % 400 == 0)
				return true;
			else
				return false;
		}
	}
}

int sum(int y, int m, int d)
{
	int sum = 366;
	int days[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	for (int i = 1; i < y; i++)
	{
		if (leap(i))
			sum += 366;
		else
			sum += 365;
	}
	if (leap(y) && m > 2)
		sum++;
	for (int i = 1; i < m; i++)
		sum += days[i];
	sum += d;

	return sum;
}

int main()
{
	int y1, y2, m1, m2, d1, d2;
	while (cin >> y1 >> m1 >> d1)
	{
		int ans1, ans2;
		cin >> y2 >> m2 >> d2;
		ans1 = sum(y1, m1, d1);
		ans2 = sum(y2, m2, d2);
		cout << abs(ans1 - ans2) << endl;
	}
}
