#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int num;
	while (scanf("%d", &num) && num!=0)
	{
		int ct = 0;
		if (num == 0)
			break;
		while (num%2)
		{
			ct++;
			num /= 2;
		}
		printf("%d\n", ct);
	}
}
