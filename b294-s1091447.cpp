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
        int sum = 0,cs;
        for (int i = 1; i <= num_case; i++)
        {
            cin >> cs;
            sum += cs * i;
        }
        cout <<sum<< endl;
    }
       
}