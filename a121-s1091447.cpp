#include <iostream>
#include <cmath>
using namespace std;

bool check(int num);

int main()
{
	int num1, num2;
	while (cin >> num1 >> num2)
	{
		int ct = 0;
		for (int i = num1; i <= num2; i++)
		{
			if (i % 6 == 1 || i % 6 == 5)
			{
				if (check(i))
					ct++;
			}
			if (i == 2 || i == 3)
				ct++;
		}
		cout << ct << endl;
	}
}

bool check(int num)
{
	bool prime=true;
	for (int i = 2; i <= sqrt(num); i++)
	{
		if (num % i == 0)
		{
			prime = false;
		}
	}
	return prime;
}