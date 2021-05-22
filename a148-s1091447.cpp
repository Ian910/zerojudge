#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int num,cs;
	while (cin >> num)
	{
		float ans=0;
		for(int i = 0; i < num;i++)
		{
			cin >> cs;
			ans += cs;
		}
		ans /= num;
		if (ans > 59)
			cout << "no" << endl;
		else
			cout << "yes" << endl;
	}
}
