#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>
#include <iomanip>
#include <sstream>
using namespace std;

int main()
{
	int num_cs,cs1,cs2;
	cin >> num_cs;
	for (int i = 0; i < num_cs; i++)
	{
		int st1,sum=0;
		cin >> cs1>>cs2;
		st1 = sqrt(cs1);
		if (st1 * st1 < cs1)
			st1 ++;
		while (cs2 > st1*st1)
		{
			sum += st1 * st1;
			st1++;
		}
		cout <<"Case "<<i+1<<": "<< sum << endl;
	}
}