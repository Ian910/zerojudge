#include <iostream>
using namespace std;

int main()
{
	long long int a;
	while (cin >> a)
	{
		int b[100], i = 0;
		if (a == 0)
			cout << 0 << endl;
		else
		{
			while (a % 10 == 0)
			{
				a /= 10;
			}
			while (a > 0)
			{
				b[i] = a % 10;
				a /= 10;
				i++;
			}
			for (int j = 0; j < i; j++)
			{
				cout << b[j];
			}
			cout << endl;
		}
	}
}