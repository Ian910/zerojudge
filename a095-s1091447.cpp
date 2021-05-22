#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>
#include <iomanip>
#include <sstream>
using namespace std;

int main()
{
	long long int cs1, cs2;
	while (cin >> cs1>>cs2)
	{
		if (cs1 != cs2)
			cout << cs2 + 1 << endl;
		else
			cout << cs2 << endl;
	}
}