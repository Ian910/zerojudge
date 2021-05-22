#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>
#include <iomanip>
using namespace std;

int main() 
{
    int num_case;
    string str;
    cin >> num_case;
    getline(cin, str);
    for (int i = 0; i < num_case; i++)
    {
        int cs_now[11] = { 0 }, cs_old[11] = { 0 }, count[11] = { 0 };
        getline(cin, str);
           
        for (int j = 0;j < str.length(); j++)
        {
            if (j != 0)
            {
                for (int k = 1; k <= 10; k++)
                {
                    cs_old[k] = cs_now[k];
                    cs_now[k] = { 0 };
                }
            }
            if (str[j] <= 'g' && str[j] >= 'c')
            {
                cs_now[2] = 1;
                cs_now[3] = 1;
                cs_now[4] = 1;

                for (int k = 7; k < 11 - (str[j] - 'c'); k++)
                    cs_now[k] = 1;
            }
            else if (str[j] >= 'D' && str[j] <= 'G')
            {
                cs_now[1] = 1;
                cs_now[2] = 1;
                cs_now[3] = 1;
                cs_now[4] = 1;
                for (int k = 7; k < 10-(str[j] - 'D'); k++)
                    cs_now[k] = 1;
            }
            else if (str[j] == 'C')
            {
                cs_now[3] = 1;
            }
            else if (str[j] == 'A')
            {
                cs_now[2] = 1;
                cs_now[1] = 1;
                cs_now[3] = 1;
            }
            else if (str[j] == 'B')
            {
                cs_now[2] = 1;
                cs_now[1] = 1;
            }
            else if (str[j] == 'a')
            {
                cs_now[2] = 1;
                cs_now[3] = 1;
            }
            else if (str[j] == 'b')
            {
                cs_now[2] = 1;
            }
            for (int k = 1; k <= 10; k++)
            {
                if (cs_now[k] == 1 && cs_old[k] == 0)
                    count[k]++;               
            }
        }
       
        for (int j = 1; j <= 10; j++)
        {
            cout << count[j];
            if (j != 10)
                cout << " ";
            else
                cout << endl;
        }
    }

}