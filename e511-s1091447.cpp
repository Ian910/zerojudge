#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int num_cs, n, cs[20];
    cin >> num_cs;
    for (int j = 0; j < num_cs; j++)
    {
        int cs[20] = { 0 };
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> cs[i];
        }
        sort(cs, cs + n);
        cout << 2 * (cs[n - 1] - cs[0]) << endl;
    }
}