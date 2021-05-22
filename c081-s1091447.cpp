#include<iostream>
#include<algorithm>
#include<cmath>
#include<string>
#include<iomanip>
using namespace std;

int main()
{
	int b[3], c[3], g[3];
	while (cin >> b[0]>>g[0]>> c[0] >> b[1] >> g[1] >> c[1] >> b[2] >> g[2] >> c[2])
	{
		string cs_num[6] = { "BCG","BGC","CBG","CGB","GBC","GCB" };
		int cs[6] = { 0 };
		cs[0] = b[1] + b[2] + c[0] + c[2] + g[0] + g[1];
		cs[1] = b[1] + b[2] + g[0] + g[2] + c[0] + c[1];
		cs[2] = c[1] + c[2] + b[0] + b[2] + g[0] + g[1];
		cs[3] = c[1] + c[2] + g[0] + g[2] + b[0] + b[1];
		cs[4] = g[1] + g[2] + b[0] + b[2] + c[0] + c[1];
		cs[5] = g[1] + g[2] + c[0] + c[2] + b[0] + b[1];
		int max = 0, temp = cs[0];
		for(int i=0;i<6;i++)
		{
			if (temp > cs[i])
			{
				temp = cs[i];
				max = i;
			}
		}
		cout << cs_num[max]<<" " << temp << endl;
	}
}