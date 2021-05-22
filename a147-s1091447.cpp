#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int num;
	while (cin >> num)
	{
		if (num == 0)
			break;
		else if (num == 1)
			cout << endl;
		else 
		{
			for (int i = 1; i < num; i++)
			{
				if (i % 7 == 0)
					continue;
				else
					cout << i << " ";
			}
			cout << endl;
		}
	}
}
