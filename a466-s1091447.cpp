#include<iostream>
#include<string>
using namespace std;

int main() 
{
	int case_num;
	cin >> case_num;
	string letter;
	string one = "one", two = "two", three = "three";
	for (int i = 0; i <= case_num; i++)
	{
		int count1 = 0, count2 = 0;
		getline(cin, letter);
		if (letter.length() == 5)
		{
			for (int j = 0; j < 5; j++)
			{
				if (letter[j] == three[j])
					count1++;
			}
			if (count1 > 1)
				cout << 3 << endl;
		}
		else if (letter.length() == 3)
		{
			for (int j = 0; j < 3; j++)
			{
				if (letter[j] == one[j])
					count1++;
				else if (letter[j] == two[j])
					count2++;
			}
			if (count1 > 1)
				cout << 1 << endl;
			else if (count2 > 1)
				cout << 2 << endl;
		}
	}
}