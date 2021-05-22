#include<iostream>
#include<cstdio>
using namespace std;

int main() 
{
	int t;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		int n;
		cin >> n;
		string word;
		cin >> word;
		int count = 0;
		for (int j = 0; j < n; j++)
		{
			if (word[j] == '.')
			{
				count++;
				if (j + 1 < n)
					word[j + 1] = '#';
				if (j + 2 < n)
					word[j + 2] = '#';
			}
		}
		cout << "Case " << i + 1 << ": " << count << endl;
	}
}