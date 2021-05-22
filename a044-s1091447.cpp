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
        cout << (num*num*num+5*num+6)/6 << endl;
    }
}