#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>
#include <iomanip>
#include <sstream>
using namespace std;

int main()
{
	int num_cs, cs, ct[3] = {0};
	cin >> num_cs;
	for (int i = 0; i < num_cs; i++)
	{
		cin >> cs;
		ct[cs % 3]++;
	}
	cout << ct[0] << " " << ct[1] << " " << ct[2] << endl;
}