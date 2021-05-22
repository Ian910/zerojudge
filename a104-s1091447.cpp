#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>
#include <iomanip>
#include <sstream>
using namespace std;

int main()
{
	int cs_num;
	while (cin >> cs_num)
	{
		int cs[1000] = { 0 };
		for (int i = 0; i < cs_num; i++)
		{
			cin >> cs[i];
		}
		sort(cs, cs + cs_num);
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