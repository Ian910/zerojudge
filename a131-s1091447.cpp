#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

char b[26] = { '0','1','2','3','0','1','2','0','0','2','2','4','5','5','0','1','2','6','2','3','0','1','0','2','0','2' };

int main()
{
	string c;
	cout << setw(13) << "NAME" << setw(33) << "SOUNDEX CODE" << endl;
	while (getline(cin, c))
	{
		int count = 0;
		char temp;
		cout << setw(c.length() + 9) << c << setw(26 - c.length()) << c[0];
		for (int i = 1; i < c.length() && count < 3; i++)
		{
			temp = b[c[i] - 'A'];

			if (c[i] != c[0] && temp != '0' && temp != b[c[i - 1] - 'A'])
			{
				cout << temp;

				count++;
			}
		}
		while (count < 3)
		{
			cout << "0";
			count++;
		}
		cout << endl;
	}
	puts("                   END OF OUTPUT");
}