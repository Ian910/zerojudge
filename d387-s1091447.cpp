#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>
using namespace std;

int prime(int);

int main()
{
	int num,num2,num1;
	while (cin >> num)
	{
		if (prime(num) == 1)
			cout <<num <<" is not prime." << endl;
		else 
		{
			num1 = num;
			num2 = 0;
			while (num1 > 0)//Â½Âà¼Æ¦r 
			{
				num2 = num2 * 10 + num1 % 10;
				num1 /= 10;
			}

			if (prime(num2) == 1||num==num2)
				cout << num << " is prime." << endl;
			else
				cout << num << " is emirp." << endl;
		}
		
	}
}

int prime(int num)
{
	int a = 0;
	for (int i = 2; i <= sqrt(num); i++)
	{
		if (num % i == 0)
		{
			a = 1;
			i = num;
		}
	}
	return a;
}
