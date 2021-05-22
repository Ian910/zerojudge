#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>
#include <iomanip>
#include <sstream>
using namespace std;

int main()
{
	string str;
	while (cin >> str)
	{
		int num[6] = { 0 };
		for (int i = 0; i < 6; i++)
		{
			num[i] = abs(str[i] - str[i + 1]);
		}
		for (int i = 0; i < 6; i++)
		{
			cout << num[i];
		}
		cout << endl;
	}
}