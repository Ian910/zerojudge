#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main()
{	
	int num_case,count=0;
	while (cin >> num_case&&num_case>1)
	{
		count++;
		int cs[100] = { 0 }, sum[20001] = { 0 },k=0;
		for(int i=0;i<num_case;i++)
		{
			cin >> cs[i];
		}
		for (int i = 0; i < num_case; i++)
		{
			for (int j = i; j < num_case; j++)
			{
				sum[cs[i] + cs[j]]++;
				if (sum[cs[i] + cs[j]] > 1||cs[i]<=0||cs[i]>cs[j])
				{
					k = 1;
					i = num_case;
				}
			}
		}
		if(k==0)
			cout<< "Case #"<<count<<": It is a B2-Sequence."<<endl;
		else
			cout << "Case #" << count << ": It is not a B2-Sequence." << endl;
	}
}