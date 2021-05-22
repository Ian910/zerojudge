#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>
#include <iomanip>
using namespace std;

int main()
{
	int num_case, num_train;
	cin >> num_case;
	for (int i = 0; i < num_case; i++)
	{
		cin >> num_train;
		if (num_train == 0)
			break;
		int cs[50] = { 0 }, count = 0, temp;
		for (int j = 0; j < num_train; j++)
		{
			cin >> cs[j];
		}
		for (int j = 0; j < num_train; j++)
		{
			for (int k = j + 1; k < num_train; k++)
			{
				if (cs[k] < cs[j])
				{
					temp = cs[k];
					cs[k] = cs[j];
					cs[j] = temp;
					count++;
				}
			}
		}
		cout << "Optimal train swapping takes " << count << " swaps.\n";

	}
}