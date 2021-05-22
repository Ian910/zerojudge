#include<iostream>
#include<algorithm>
#include<cmath>
#include<string>
using namespace std;

int main()
{
    int n,cs;
    while (cin >> n)
    {
        /*int* num = new int[30000];*/
        int max = 0, i = 1, max_num = 0, num[30000] = { 0 };
        for (int i = 0; i < n; i++)
        {
            cin >> cs;
            num[cs]++;
            if (max < num[cs])
            {
                max = num[cs];
            } 
            if (max_num < cs)
            {
                max_num = cs;
            }
        }
        while (i<=max_num)
        {
            if(num[i] == max )
                cout << i << " " << max << endl;
            i++;
        }
        
        
    }     
}