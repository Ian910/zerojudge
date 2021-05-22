#include <iostream>
#include <string>
#include<sstream>
#include<cstdio>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int num_case;
	string a;
	int num[4] = {};
	int final[10] = { 0,2,4,6,8,1,3,5,7,9 };
	while (cin >> num_case)
	{
		for (int k = 0; k < num_case; k++)
		{
			cin >> num[0] >> num[1] >> num[2] >> num[3];
			int i = 0, sum = 0;
			for (int j = 0; j < 4; j++)
			{
				sum += final[(num[j] / 1000)] + final[(num[j] % 100) / 10] + (num[j] % 1000) / 100 + (num[j] % 10);
			}
			if (sum % 10 == 0)
				cout << "Valid\n";
			else
				cout << "Invalid\n";
		}
	}
}