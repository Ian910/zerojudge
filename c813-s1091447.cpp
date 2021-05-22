#include <iostream>
#include <string>

using namespace std;

int alg(int);

int main()
{
	string a;
	while (cin >> a && a != "0")
	{
		int sum = 0;
		for (int i = 0; i < a.length(); i++)
		{
			sum += a[i] - '0';
		}
		while (sum > 9)
		{
			sum = alg(sum);
		}
		cout << sum << endl;
	}
}

int alg(int num)
{
	int sum = 0;
	while (num > 0)
	{
		sum += num % 10;
		num /= 10;
	}
	return sum;
}