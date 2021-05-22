#include<iostream>
#include<algorithm>
#include<cmath>
#include<string>
using namespace std;


int main()
{
    int num_case;
    while (cin >> num_case)
    {
        int a[1000] = {0},b[1000] = { 0 },temp;
        for (int i = 0; i < num_case; i++)
        {
            cin >> a[i] >> b[i];
        }
        for (int i = 0; i < num_case; i++)
        {
            for (int j = i + 1; j < num_case; j++)
            {
                if (a[i] > a[j])
                {
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;

                    temp = b[i];
                    b[i] = b[j];
                    b[j] = temp;
                }
                else if(a[i] == a[j] && b[i] > b[j])
                {
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;

                    temp = b[i];
                    b[i] = b[j];
                    b[j] = temp;
                }
            }
        }

        for (int i = 0; i < num_case; i++)
        {
            cout << a[i] << " " << b[i] << endl;
        }
    }
       
}