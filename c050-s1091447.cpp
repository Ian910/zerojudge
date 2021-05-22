#include<iostream>
#include<algorithm>
#include<cmath>
#include<string>
using namespace std;

bool prime(int num)
{
    bool check = false;
    if (num == 1 || num == 2 || num % 2 == 0)
        return false;
    else if (num == 3)
        return true;
    else
    {
        for (int i = 2; i <= sqrt(num); i++)
        {
            if (num % i == 0)
            {
                return false;
                break;
            }
            else
                check = true;
        }
    }
    if (check)
        return true;
}

int main()
{
    int num;
    while (cin >> num)
    {
        int temp1, temp2;
        for (int i = 3; i <= num / 2; i += 2)
        {
            temp1 = i;
            temp2 = num - i;
            if (prime(temp2)&&prime(temp1))
            {
                cout << num << " = " << temp1 << " + " << temp2 << endl;
                break;
            }
            else if (!prime(temp1)&&!prime(temp2) && temp1 == num / 2)
            {
                cout << "Goldbach's conjecture is wrong.\n";
            }
        }
    }     
}