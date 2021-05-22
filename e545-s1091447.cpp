#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int decimal(int);
int hexadecimal(int);

int main()
{	
	int num_case,cs;
	cin >> num_case;
	for (int i = 0;i < num_case; i++)
	{
		string str1="", str2="";
		cin >> cs;
		cout<<decimal(cs)<<" "<<hexadecimal(cs)<<endl;
	}
}

int decimal(int num)
{
	int count=0;
	while (num > 0)
	{
		if(num%2==1)
			count++;
		num /= 2;
	}
	return count;
}
int hexadecimal(int num)
{
	int count=0;
	while (num > 0)
	{
		
		if (num % 10 == 1|| (num % 10)==2|| (num % 10) == 4||(num % 10) == 8)
		{
			count++;
			num /= 10;
		}
		else if (num % 10 == 7)
		{
			count += 3;
			num /= 10;
		}
		else if (num % 10 == 0)
		{
			num /= 10;
		}
		else
		{
			count += 2;
			num /= 10;
		}
	}
	return count;
}