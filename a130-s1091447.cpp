#include <iostream>
using namespace std;

int main()
{
	int b[10], case_num;
	string a[10];
	while (cin >> case_num)
	{
		for (int k = 0; k < case_num; k++)
		{
			int max = 0, j = 0;
			string c[10] = {};
			for (int i = 0; i < 10; i++)
			{
				cin >> a[i] >> b[i];
				if (max < b[i])
				{
					max = b[i];
					j = 0;
					c[0] = { " " };
					c[j] = a[i];
				}
				else if (max == b[i])
				{
					j++;
					c[j] = a[i];
				}
			}
			cout << "Case #" << k + 1 << ":\n";
			for (int i = 0; i <= j; i++)
			{
				cout << c[i] << endl;
			}
		}
	}
}