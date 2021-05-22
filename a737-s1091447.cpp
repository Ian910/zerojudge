#include<iostream>
#include <algorithm>
using namespace std;

int main()
{
	int case_num, peo_num;
	cin >> case_num;
	while (case_num--)
	{
		int sum = 0, d[500] = {};
		cin >> peo_num;
		for (int i = 0; i < peo_num; i++)
		{
			cin >> d[i];
		}
		sort(d, d + peo_num);
		for (int i = 0; i < peo_num; i++)
		{
			sum += abs(d[i] - d[peo_num / 2]);
		}
		cout << sum << endl;
	}
}