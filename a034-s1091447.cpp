#include <iostream>
using namespace std;
int main() 
{
    int num, a[100], i;
    while (cin >> num)
    {
        i = 0;
        while (num > 0)
        {
            a[i] = num % 2;
            num /= 2;
            i++;
        }
        for (int j = i - 1; j >= 0; j--)
        {
            cout << a[j];
        }
        cout << endl;
    }
}