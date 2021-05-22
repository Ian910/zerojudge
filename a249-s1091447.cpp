#include <iostream>
#include <cstdio>
using namespace std;

int main(void) {
    int D, I;
    int n;
    scanf("%d", &n);
    while (n--) 
    {
        scanf("%d%d", &D, &I);
        int k = 1;
        for (int i = 0; i < D - 1; i++) 
        { 
            if (I % 2 != 0) 
            {
                k = 2 * k;
                I = (I + 1) / 2;
            }
            else 
            {
                k = 2 * k + 1;
                I = I / 2;
            }
        }
        printf("%d\n", k);
    }
}