#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>
#include <iomanip>
using namespace std;

void east(int* dice)
{
    int temp = dice[4];

    dice[4] = dice[3];
    dice[3] = dice[5];
    dice[5] = dice[1];
    dice[1] = temp;
}

void west(int* dice) 
{
    int temp = dice[4];

    dice[4] = dice[1];
    dice[1] = dice[5];
    dice[5] = dice[3];
    dice[3] = temp;
}

void north(int* dice) 
{
    int temp = dice[0];

    dice[0] = dice[1];
    dice[1] = dice[2];
    dice[2] = dice[3];
    dice[3] = temp;
}

void south(int* dice) 
{
    int temp = dice[0];

    dice[0] = dice[3];
    dice[3] = dice[2];
    dice[2] = dice[1];
    dice[1] = temp;  
}


int main() 
{
    int num_case;

    while (cin >> num_case) 
    {
        if (num_case == 0)
            break;
        int faces[6] = { 2, 1, 5, 6, 3, 4 };

        for (int i = 0; i < num_case;i++) 
        {
            string a = "";
            cin >> a;
            if (a == "north") 
            {
                north(faces);
            }
            else if (a == "south") 
            {
                south(faces);
            }
            else if (a == "west") 
            {
                west(faces);
            }
            else if (a == "east") 
            {
                east(faces);
            }
        }
        cout << faces[1] << endl;
    }
}