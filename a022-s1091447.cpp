#include <iostream>
#include <string>
using namespace std;

int main()
{
	string a;
	while (getline(cin, a))
	{
		int count = 0;
		for (int i = 0; i < a.length() / 2; i++)
		{
			if (a[i] != a[a.length() - i - 1])
				count++;
		}
		if (count == 0)
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}
}