#include <iostream>
#include <algorithm>
using namespace std;

bool compare(int a, int b) 
{
	if (a % 10 == b % 10) 
		return a > b;
	else 
		return a % 10 < b % 10;
}

int main()
{
	int cs_num;
	while (cin >> cs_num)
	{
		int cs[1000] = { 0 };
		for (int i = 0; i < cs_num; i++)
			cin >> cs[i];
		sort(cs, cs + cs_num, compare);
		for (int i = 0; i < cs_num; i++)
		{
			cout << cs[i];
			if (i != cs_num - 1)
				cout << " ";
			else
				cout << endl;
		}
	}
}
