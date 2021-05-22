#include<iostream>
#include<algorithm>
#include<cmath>
#include<string>
#include<iomanip>
using namespace std;

int main()
{
	int cs[9];
	while (cin >> cs[0])
	{
		int ct = 0;
		for (int i = 1; i < 9; i++)
		{
			cin >> cs[i];
		}
		for (int i = 0; i < 9; i++)
		{
			if (cs[i] == 0&&i!=8)
				continue;
			else
			{
					if (ct == 0)//ÀY
					{
						ct++;
						if (i < 7)
						{
							if(cs[i]==1)
								cout << "x^" << 8 - i;
							else if(cs[i]==-1)
								cout << "-x^" << 8 - i;
							else
								cout<<cs[i] << "x^" << 8 - i;
						}
						else if (i == 7)
						{
							if (cs[i] == 1)
								cout << "x";
							else if (cs[i] == -1)
								cout << "-x";
							else
								cout << cs[i] << "x";

						}
						else
						{
							cout << cs[i] << endl;
						}
					}
					else
					{
						if (i < 7)
						{
							if (cs[i] == 1)
								cout << " + x^" << 8 - i;
							else if (cs[i] == -1)
								cout << " - x^" << 8 - i;
							else if (cs[i] > 1)
								cout << " + " << cs[i] << "x^" << 8 - i;
							else
								cout << " - " << cs[i] * (-1) << "x^" << 8 - i;
						}
						else if (i == 7)
						{
							if (cs[i] == 1)
								cout << " + x";
							else if (cs[i] == -1)
								cout << " - x";
							else if (cs[i] > 1)
								cout << " + " << cs[i] << "x";
							else
								cout << " - " << cs[i] * (-1) << "x";
						}
						else
						{
							if (cs[i] > 0)
								cout << " + " << cs[i] << "\n";
							else if (cs[i] < 0)
								cout << " - " << cs[i] * (-1) << "\n";
							else
								cout << endl;
						}
					}
				
			}

		}
	}
}