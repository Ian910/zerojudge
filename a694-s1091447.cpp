#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n, m;
    while (cin >> n >> m)
    {
        int cs, bg_x, bg_y, ed_x, ed_y, ** sum = new int* [n + 1];
        for (int i = 0; i < n + 1; i++)
            sum[i] = new int[n + 1];
        for (int i = 1; i <= n; i++)
        {
            sum[i][0] = 0;
            for (int j = 1; j <= n; j++)
            {
                cin >> cs;
                sum[i][j] = sum[i][j - 1] + cs;
            }
        }
        for (int i = 0; i < m; i++)
        {
            int ans = 0;
            cin >> bg_x >> bg_y >> ed_x >> ed_y;

            for (int j = bg_x; j <= ed_x; j++)
            {
                ans += sum[j][ed_y] - sum[j][bg_y - 1];
            }
            cout << ans << "\n";
        }
        for (int i = 0; i < n + 1; i++)
            delete[] sum[i];
        delete[] sum;
    }
}