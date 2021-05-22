#include<iostream>
using namespace std;

int main()
{
	long long int male[80];
	male[0] = 1, male[1] = 1;
	for (int i = 2; i < 80; i++)
	{
		male[i] = male[i - 1] + male[i - 2];
	}
	int num;
	while (cin >> num && num != 0)
	{
		num--;
		if (num == 0)
			cout << 1 << endl;
		else
			cout << male[num] + male[num - 1] << endl;
	}
}