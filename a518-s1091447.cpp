#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int old_c, new_c;
	while (cin >> old_c >> new_c && (old_c != -1 && new_c != -1))
	{
		if (abs(new_c - old_c) > 49)
		{
			if (new_c > old_c)
				cout << old_c + 100 - new_c << endl;
			else
				cout << new_c + 100 - old_c << endl;
		}
		else
			cout << abs(new_c - old_c) << endl;
	}
}