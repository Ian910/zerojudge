#include<iostream>
#include<cstdio>
using namespace std;

int main() {
    string num, binary = "";
    int ans;
    char flag;
    while (cin >> num && num != "~")
    {
        if (num == "#")
        {
            ans = 0;
            for (int i = 0; i < binary.length(); i++)
            {
                if (i)
                    ans *= 2;
                if (binary[i] == '1')
                    ans += 1;
            }
            binary = "";
            cout << ans << endl;
        }
        else if (num.length() == 1)
            flag = '1';
        else if (num.length() == 2)
            flag = '0';
        else
            for (int i = 0; i < num.length() - 2; i++)
                binary += flag;
    }
}