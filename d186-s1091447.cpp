#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main()
{	
	long long int a, b,c,d;
	while (cin >> a >> b)
	{
		if (a == b && a == 0)
			break;
		else
		{
			c = (int)sqrt(a);
			d = (int)sqrt(b);
			for (int i = 1; i < 318; i++)
			{
				if (sqrt(a) == i)
					c--;
			}
			cout << d - c << endl;
		}
	}
}