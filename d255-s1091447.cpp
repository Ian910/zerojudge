#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>
using namespace std;

int gcd(int, int);
int main()
{
	int n, sum_gcd[501] = {0};
	sum_gcd[2] = 1;
	for (int i = 3; i < 501; i++)
	{
		sum_gcd[i] += sum_gcd[i - 1];
		for (int j = 1; j < i; j++)
		{
			sum_gcd[i] += gcd(i, j);
		}
	}
	while (cin >> n && n != 0)
	{
		
		cout << sum_gcd[n] << endl;
	}
}

int gcd(int num1, int num2)
{
	int r = 0;
	while (num2 != 0) {
		r = num1 % num2;
		num1 = num2;
		num2 = r;
	}

	return num1;
}