#include <iostream>
using namespace std;

int main()
{
	int len;
	while (cin >> len)
	{
		int count = 0;
		if (len == 0)
			break;
		for (int i = 0; i < len; i++)
		{
			count += (len - i) * (len - i);
		}
		cout << count << endl;
	}
}