#include<iostream>
#include<algorithm>
#include<cmath>
#include<string>
using namespace std;

int main()
{
    int n;
    while (cin >> n)
    {
        int *cs= new int [n],temp,ct=0;
        for (int i = 0; i < n; i++)
        {
            cin >> cs[i];
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (cs[i] > cs[j])
                {
                    temp = cs[i];
                    cs[i] = cs[j];
                    cs[j] = temp;
                    ct++;
                }
            }
        }
        cout << ct << endl;
    }     
}