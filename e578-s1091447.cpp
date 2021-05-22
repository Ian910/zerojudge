#include <iostream>
#include <string>

using namespace std;

int main()
{
	string key = { "`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./" }, a;
	while (getline(cin, a))
	{
		for (int i = 0; i < a.length(); i++)
		{
			for (int j = 0; j < key.length(); j++)
			{
				if (a[i] == key[j])
				{
					a[i] = key[j - 2];
				}
			}
		}
		for (int i = 0; i < a.length(); i++)
		{
			cout << a[i];
		}
		cout << endl;
	}
}