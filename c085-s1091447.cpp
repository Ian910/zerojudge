#include <iostream>
   
using namespace std;

int main() 
{
    int z, i, m, l,k=1;// z*l+i  %m
    while (cin >> z >> i >> m >> l)
    {
        if (z == 0 || i == 0 || m == 0 || l == 0)
            break;
        int* cs = new int[10001]();
        int ct = 0;
        while (cs[l] == 0)
        {
            ct++;
            cs[l]=ct;
            l = (z * l + i) % m;
        }
        cout <<"Case "<<k<<": "<< ct-cs[l]+1 << endl;
        k++;
    }
}