#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
#include<sstream>

using namespace std;

int main()
{
    int num_case,n;
    cin >> num_case;
    string str;
    for(int i=0;i<num_case;i++)
    {
        bool no_sym = false;
        cin >> str >> str >> n;
        long long int sym[90000] = { 0 };
        for (int j = 0; j < n * n; j++)
        {
            cin >> sym[j];
        }
        for (int j = 0; j < n * n / 2+1; j++)
        {
            if (sym[j] < 0 || sym[j] != sym[(n * n - 1) - j])
                no_sym = true;
        }
        if(no_sym==true)
            cout << "Test #" << i+1 << ": Non-symmetric." << endl;
        else
            cout << "Test #" << i+1 << ": Symmetric." << endl;
    }
}