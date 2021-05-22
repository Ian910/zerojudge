#include <iostream>
#include <string>
#include<sstream>
#include<cstdio>
using namespace std;

int gcd(int, int);

int main()
{
	int case_num, num[100] = {};

	string a;

	while (cin >> case_num)
	{
		getchar();
		for (int l = 0; l < case_num; l++)
		{
			getline(cin, a);


			int max = 0, i = 0, temp;
			stringstream ss(a);
			while (ss >> temp)
				num[i++] = temp;
			for (int j = 0; j < i; j++)
			{
				for (int k = j + 1; k < i; k++)
				{
					int g = gcd(num[j], num[k]);
					max = max < g ? g : max;
				}
			}
			cout << max << endl;
		}
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