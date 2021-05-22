#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main()
{	
	int num_case, num_party,day;
	cin >> num_case;
	for (int i = 0; i < num_case; i++)
	{
		int  hartal[100] = { 0 }, count[3651] = {0},cc=0; /*14 3 3 4 8*/
		cin >> day;/*14*/
		cin >> num_party;/*3*/
		for (int j = 0; j < num_party; j++)
		{
			cin >> hartal[j];/*3 4 8*/
		}
		for (int j = 0; j < num_party; j++)
		{
			for (int k = hartal[j]; k <= day; k+= hartal[j])
			{
				count[k]++;/*3 6 9 12  4 8 12  8 */
			}
		}
		for (int j = 1; j <= day; j++)
		{
			if (j % 7 != 6 && j % 7 != 0 && count[j] > 0)
				cc++;
		}
		cout << cc << endl;
	}
}