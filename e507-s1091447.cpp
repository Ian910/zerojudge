#include <iostream>
#include <string>

using namespace std;

int main()
{
	string a, b;
	while (getline(cin, a))
	{
		int ch[26] = { 0 }, ch1[26] = { 0 }, ch2[26] = { 0 };
		getline(cin, b);
		for (int i = 0; i < a.length(); i++)
		{
			ch1[a[i] - 'a']++;
		}
		for (int i = 0; i < b.length(); i++)
		{
			ch2[b[i] - 'a']++;
		}
		for (int i = 0; i < 26; i++)
		{
			if (ch1[i] < ch2[i])
			{
				ch[i] = ch1[i];
			}
			else
				ch[i] = ch2[i];
		}
		for (int i = 0; i < 26; i++)
		{
			if (ch[i] != 0)
			{
				while (ch[i] != 0)
				{
					cout << char('a' + i);
					ch[i]--;
				}
			}
		}
		cout << endl;
	}
}