#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>
#include <iomanip>
#include <sstream>
using namespace std;

int main() 
{
    int num;
    while (cin>>num)
    {
        if (num <= 10)
            cout << num * 6 << endl;
        else if (num <= 20)
            cout << (num - 10) * 2 + 60 << endl;
        else if (num < 40)
            cout << num + 60 << endl;
        else
            cout << 100 << endl;
    }
}