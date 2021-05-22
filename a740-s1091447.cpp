#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

int main()
{
    int num;
    while (cin >> num)
    {
        int sum = 0,i=2,temp;
        temp = num;
        while (i<=(sqrt(temp)+1))
        {
            while (num % i == 0)
            {
                sum+= i;
                num/= i;   
            }
            i++;
        }
        if (sum > 0)
        {
            if(num==1)
                cout << sum << endl;
            else
                cout << sum+num << endl;
        }
        else
            cout << temp << endl;
    }
       
}