#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n, m;
    while (cin >> n >> m)
    {
        int cs, bg, ed, sum[100001] = { 0 };
        sum[0] = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> cs;
            sum[i + 1] = sum[i] + cs;
        }
        for (int i = 0; i < m; i++)
        {
            cin >> bg >> ed;
            if (bg == 1)
                cout << sum[ed] << endl;
            else
                cout << sum[ed] - sum[bg - 1] << endl;
        }

    }
}