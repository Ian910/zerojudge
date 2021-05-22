#include<iostream>
#include<cstdio>
#include <stdio.h>
#include<stdlib.h>
using namespace std;

int main() {
    int case_num;
    cin >> case_num;
    string month;
    int day, year;
    int y1, y2;
    for (int i = 0; i < case_num; i++)
    {
        cin >> month;
        scanf("%d, %d", &day, &year);
        if ((month[0] == 'J' && month[1] == 'a') || month[0] == 'F')
            year--;
        y1 = year / 4 - year / 100 + year / 400;
        cin >> month;
        scanf("%d, %d", &day, &year);
        if ((month[0] == 'J' && month[1] == 'a') || (month[0] == 'F' && day < 29))
            year--;
        y2 = year / 4 - year / 100 + year / 400;
        cout << "Case " << i + 1 << ": " << y2 - y1 << endl;
    }
}