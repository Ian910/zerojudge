#include<iostream>
#include<string>
#include <algorithm>

using namespace std;

int main()
{
	string a;
	int num1, num2;
	while (getline(cin, a) && a != "0")
	{
		num1 = 0, num2 = 0;
		for (int i = 0; i < a.length(); i++)
		{
			if (i % 2 == 0 || i == 0)
				num1 += a[i] - '0';
			else
				num2 += a[i] - '0';
		}
		if (abs(num1 - num2) % 11 == 0)
			cout << a << " is a multiple of 11.\n";
		else
			cout << a << " is not a multiple of 11.\n";
	}
}