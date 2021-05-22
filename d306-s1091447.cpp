#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int binary(string);
int gcd(int, int);

int main()
{	
	int num_case;
	string str1, str2;
	cin >> num_case;
	for (int i = 0; i < num_case; i++)
	{
		cin >> str1 >> str2;
		int num1, num2;
		num1 = binary(str1);
		num2 = binary(str2);
		if (gcd(num1, num2) != 1)
			cout << "Pair #"<<i+1<<": All you need is love!" << endl;
		else
			cout << "Pair #"<<i+1<<": Love is not all you need!" << endl;

	}
}

int binary(string str) 
{
	int num=0;
	for (int i = 0; i < str.length(); i++)
	{
		num += (str[str.length() - 1 - i] - '0')*pow(2,i);
	}
	return num;
}

int gcd(int num1, int num2)
{
	int r = 0;
	while (num2 != 0) {
		r = num1 % num2;
		num1 = num2;
		num2 = r;
	}

	return num1;
}