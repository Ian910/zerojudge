#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main()
{
	long long a, b;
	while (cin >> a >> b)
	{
		long long temp=1;
		for (int i = 1; temp < a && b>1; i++)
		{
			temp = pow(b, i);
		}
		if (temp > a || b <= 1) 
			cout << "Boring!" << endl;
		else
		{
			while (temp > 0)
			{
				cout << temp;
				if (temp != 1) 
					cout << " ";
				else
					cout << endl;
				temp /= b;
			}
		}
	}
}
