#include<iostream>
#include<string>
using namespace std;

int main()
{
    string a;
    while (getline(cin, a))
    {
        int count = 0, max = 0;
        for (int i = 0; i < a.length(); i++)
        {
            if (a[i] == ' ')
                count++;
            else
            {
                if (count > max)
                    max = count;
                count = 0;
            }
        }
        count = 0;
        while (max != 1)
        {
            count++;
            max = max / 2 + (max - max / 2 * 2);
        }
        cout << count << endl;
    }
}