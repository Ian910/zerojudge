#include <iostream>
#include <string>
using namespace std;

int main()
{
	string num;
	int num_cs;
	cin >> num_cs;
	while (num_cs--)
	{
		long long int ans = 1;
		cin >> num;
		for (int i = 0; i < num.length(); i++)
		{
			ans *= (num[i] - '0');
		}
		cout << ans << endl;
	}
}
