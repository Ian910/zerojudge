#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>
#include <iomanip>
using namespace std;

int main()
{
	string str;
	while (getline(cin, str))
	{
		cout << endl;
		int acsii_num[128] = { 0 }, min = 1, max = 0;
		for (int i = 0; i < str.length(); i++)
		{
			acsii_num[(int)str[i]]++;

			if (max < acsii_num[(int)str[i]])
				max = acsii_num[(int)str[i]];
		}

		while (min <= max)
		{
			for (int i = 0; i < 128; i++)
			{
				if (min == acsii_num[127-i])
				{
					cout << (127-i) << " " << acsii_num[127-i] << endl;
				}
			}
			min++;
		}

	}
}