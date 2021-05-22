#include <iostream>
#include <cstdlib>
#include <string>
#include <cstdio>

using namespace std;

string s, t;

int main()
{
	int num_case;
	cin >> num_case;
	while (getchar() != '\n');
	for (int k = 0; k < num_case; ++k)
	{
		getline(cin, t);
		getline(cin, s);
		int move = 0, flag = 0;
		for (int i = 0; i < s.length(); ++i)
		{
			while (move < t.length() && s[i] != t[move] && t[move] == ' ')
			{
				flag = 2;
				move++;
			}
			if (s[i] != t[move])
			{
				flag = 1;
				break;
			}
			else move++;
		}
		while (move < t.length() && t[move] == ' ') {
			flag = 2;
			move++;
		}

		cout << "Case " << k + 1 << ": ";
		if (flag == 1 || move < t.length())
			cout << "Wrong Answer" << endl;
		else if (flag == 2)
			cout << "Output Format Error" << endl;
		else cout << "Yes" << endl;
	}
	return 0;
}