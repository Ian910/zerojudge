#include<iostream>
#include<algorithm>
#include<cmath>
#include<string>
#include<iomanip>
using namespace std;

int main()
{
	int n,cctt=1;
	while (cin >> n&&n!=0)
	{
		int cs[51] = { 0 };
		int sum = 0,ct=0;
		for (int i = 1; i <= n; i++)
		{
			cin >> cs[i];
			sum += cs[i];
		}
		sum /= n;
		for (int i = 1; i <= n; i++)
		{
			if (cs[i] > sum)
				ct += (cs[i] - sum);
		}
		cout << "Set #" << cctt << endl;
		cout << "The minimum number of moves is " << ct << ".\n";
		cctt++;
	}
}