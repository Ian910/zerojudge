#include <iostream>
#include <string>
using namespace std;

int main()
{
	/* ¦³i+1¦æ*/
	string a, b[100] = {};
	int i = -1, max = 0;
	while (getline(cin, a))
	{
		i++;
		b[i] = a;
		if (max < a.length())
			max = a.length();
	}

	for (int k = 0; k < max; k++)
	{
		for (int j = i; j >= 0; j--)
		{
			if (b[j].length() - 1 < k)
				cout << " ";
			else
				cout << b[j][k];
		}
		cout << endl;
	}
}