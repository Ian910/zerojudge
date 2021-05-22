#include <iostream>
#include <string>
using namespace std;
long long unsigned int f[30000], g[30000];

int main()
{
	f[0] = 1;
	g[0] = 1;
	for (int i = 1; i < 30000; i++)
	{
		f[i] = i+1 + f[i - 1];
		g[i] = f[i] + g[i - 1];
	}
	int num;
	while (cin >> num)
	{
		cout << f[num-1] << " " << g[num-1] << endl;
	}
}
