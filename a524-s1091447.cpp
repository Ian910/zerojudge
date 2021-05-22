#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	
	int n;
	while (cin >> n)
	{
		int b[8];
		for (int i = 0; i < n; i++)
		{
			b[i] = n-i;
		}
		do {
			for (int i = 0; i < n; i++)
				cout << b[i];
			cout<<endl;
		}  while (prev_permutation(b, b + n));

	}

}
