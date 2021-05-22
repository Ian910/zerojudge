#include<iostream>
#include<algorithm>
#include<cmath>
#include<string>
using namespace std;

int main()
{
    int t;
    while (cin >> t)
    {
        int n, m;
        for (int k = 0; k <t; k++)
        {
            int cs;
            string str,temp;
            cin >> n>>m;
            for (int i = 0; i < n*m; i++)
            {
                    cin >> cs;
                    str += (cs + '0');
            }
            temp = str;
            reverse(begin(str), end(str));
            if (str==temp)
                cout << "go forward\n";
            else
                cout << "keep defending\n";
        }
    }     
}