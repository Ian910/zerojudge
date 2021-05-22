#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main()
{	
	int fib[39],num_case, cs;

	fib[0] = 1;
	fib[1] = 2;
	for (int i = 2; i < 39; i++)//產生費氏數列 
	{
		fib[i] = fib[i - 1] + fib[i - 2];
	}

	cin >> num_case;
	for (int i = 0;i < num_case; i++)
	{
		int flag = 0;
		cin >> cs;
		cout << cs << " = ";
		for (int j = 38; j >= 0; j--)
		{				 
			if (cs - fib[j] >= 0)
			{
				cout << "1";
				cs-= fib[j];
				flag = 1;
			}
			else if (flag == 1)
			{
				cout << "0";
			}
		}
		cout << " (fib)" << endl; 
	}
	return 0;
}