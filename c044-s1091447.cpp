#include <iostream>
#include <string>

using namespace std;

int main()
{
	int alp[26] = { 0 }, case_num, alp_temp;
	string a, lett = { "ABCDEFGHIJKLMNOPQRSTUVWXYZ" };
	char lett_temp;
	cin >> case_num;
	for (int i = 0; i <= case_num; i++)
	{
		getline(cin, a);
		for (int j = 0; j < a.length(); j++)
		{
			if (a[j] <= 'z' && a[j] >= 'a')
			{
				alp[a[j] - 'a']++;
			}
			else if (a[j] <= 'Z' && a[j] >= 'A')
			{
				alp[a[j] - 'A']++;
			}
		}
	}
	for (int j = 0; j < 26; j++)
	{
		for (int k = j + 1; k < 26; k++)
		{
			if (alp[j] < alp[k])
			{
				alp_temp = alp[j];
				alp[j] = alp[k];
				alp[k] = alp_temp;

				lett_temp = lett[j];
				lett[j] = lett[k];
				lett[k] = lett_temp;
			}
			else if (alp[j] == alp[k])
			{
				if (lett[j] > lett[k])
				{
					lett_temp = lett[j];
					lett[j] = lett[k];
					lett[k] = lett_temp;
				}
			}
		}
	}
	for (int j = 0; j < 26; j++)
	{
		if (alp[j] != 0)
			cout << lett[j] << " " << alp[j] << endl;
	}
}