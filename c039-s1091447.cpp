#include<iostream>
#include <algorithm>
using namespace std;

int algo(long long int);

int main()
{
	int a, b;
	while (cin >> a >> b)
	{
		int count = 0, max = 0, temp;
		if (b > a)
		{
			temp = b;
			b = a;
			a = temp;
			count++;
		}
		for (int i = b; i <= a; i++)
		{
			if (max < algo(i))
				max = algo(i);
		}
		if (count != 0)
			cout << b << " " << a << " " << max << endl;
		else
			cout << a << " " << b << " " << max << endl;
	}
}

int algo(long long int num)
{
	int count = 1;
	while (num != 1)
	{
		if (num % 2 != 0)
		{
			num = num * 3 + 1;
			count++;
		}
		else
		{
			num /= 2;
			count++;
		}
	}
	return count;
}