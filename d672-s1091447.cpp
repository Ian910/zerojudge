#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>
using namespace std;

int toint(string);
int deg(int);

int main()
{
	string str;
	while (cin >> str)
	{
		if (str == "0")
			break;
		int count = 0,temp;
		temp = toint(str);
		while (temp % 9 == 0)
		{
			if (temp == 9)
			{
				count++;
				break;
			}
			count++;
			temp = deg(temp);
		}
		if(count!=0)
			cout << str << " is a multiple of 9 and has 9-degree " << count << ".\n";
		else
			cout << str << " is not a multiple of 9.\n";
		
	}
	
}

int toint(string str)
{
	int num = 0;
	for (int i = 0; i < str.length(); i++)
	{
		num += str[i] - '0';
	}
	return num;
}

int deg(int num)
{
	int sum=0;
	while (num > 0)
	{
		sum += num % 10;
		num /= 10;
	}
	return sum;
}