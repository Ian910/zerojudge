#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	long long int num;
	while (cin >> num)
	{
		string num_str = "";
		int num_count = 0;
		if (num == 0)
			break;
		while (num > 0)
		{
			if (num % 2 == 1)
				num_count++;
			num_str += to_string(num % 2);
			num /= 2;
		}
		reverse(num_str.begin(), num_str.end());
		cout << "The parity of " << num_str << " is " << num_count << " (mod 2).\n";
	}
}