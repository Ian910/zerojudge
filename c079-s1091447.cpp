#include<iostream>
#include<algorithm>
#include<cmath>
#include<string>
#include<iomanip>
using namespace std;

int main()
{
	int a, b;
	while (cin >> a >> b)
	{
		cout << a + a / b + (a / b + a % b) / b << endl;
	}
}