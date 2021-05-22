#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;
	while (cin >> str)
	{
		int lt[26] = { 0 },odd=0;
		for (int i = 0; i < str.length(); i++)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				lt[str[i] - 'a']++;
			}
			else if (str[i] >= 'A' && str[i] <= 'Z')
			{
				lt[str[i] - 'A']++;
			}
		}
		for(int i=0;i<26;i++)
		{
			if (lt[i] % 2!=0)
				odd++;
		}
		if (odd < 2)
		{
			cout << "yes !" << endl;
		}
		else
		{
			cout << "no..." << endl;
		}
		for (int i = 0; i < 26; i++)
			cout << lt[i] << endl;
	}
}
