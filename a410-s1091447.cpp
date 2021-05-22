#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int a, b, c, d, e, f,tr,tr_x,tr_y,x,y;
	cin >> a >> b >> c >> d >> e >> f;
	tr = a * d - b * c;
	tr_x = c * d - b * f;
	tr_y = a * d - c * c;
	if (tr == 0)
	{
		if (tr_x == tr_y && tr_x == 0)
		{
			cout << "Too many\n";
		}
		else
			cout << "No answer\n";
	}
	else
	{
		x = tr_x / tr;
		y = tr_y / tr;

		printf("x=%.2f\ny=%.2f\n", x, y);
	}
}
