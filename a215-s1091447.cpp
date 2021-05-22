#include <iostream>
#include <string>
using namespace std;

int main()
{
	int num1, num2;
	while (cin>>num1>>num2)
	{
		int sum = num1, ct=1;
		while (sum <= num2)
		{
			ct++;
			num1++;
			sum += num1;
		}
		cout << ct << endl;
	}
}
