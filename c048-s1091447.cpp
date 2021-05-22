#include<iostream>
#include<algorithm>
#include<cmath>
#include<string>
using namespace std;

int main()
{
    int num;
    while (cin >> num&&num!=0)
    {
        int square_root = sqrt(num),temp1,temp2;
        temp1 = square_root* square_root;
        temp2 = (square_root + 1) * (square_root + 1);
        if (temp1 == num)
        {
            if (square_root % 2 == 0)
                cout << square_root << " " << 1 << endl;
            else
                cout << 1 << " " << square_root << endl;
        }
        else 
        {
            if (num - temp1 > (square_root + 1))
            {
                if (square_root % 2 == 0)
                    cout << (temp2 - num + 1) << " " << square_root + 1 << endl;
                else
                    cout << square_root + 1 << " " << (temp2 - num + 1) << endl;
            }
            else
            {
                if (square_root % 2 == 0)
                    cout << square_root + 1 << " " << (num - temp1) << endl;
                else
                    cout << (num - temp1) << " " << square_root + 1 << endl;
            }
        }
    }     
}