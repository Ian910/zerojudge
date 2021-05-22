#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	long long int cs_num,a,b,c;
	cin >> cs_num;
	for (int i = 0; i < cs_num; i++)
	{ 
		cin >> a >> b >> c;
		switch (a)
		{
		case 1:
			cout << b + c << endl;
			break;
		case 2:
			cout << b - c << endl;
			break;
		case 3:
			cout << b * c << endl;
			break;
		case 4:
			cout << b / c << endl;
			break;
		}

	}
}
