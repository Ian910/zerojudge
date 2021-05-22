#include <iostream>
#include <string>

using namespace std;

int main()
{
	string a;
	int count = 0;
	while (getline(cin, a))
	{
		if (a == "#")
			break;
		count++;
		cout << "Case " << count << ": ";
		if (a == "HELLO")
		{
			cout << "ENGLISH\n";
		}
		else if (a == "HOLA")
		{
			cout << "SPANISH\n";
		}
		else if (a == "HALLO")
		{
			cout << "GERMAN\n";
		}
		else if (a == "BONJOUR")
		{
			cout << "FRENCH\n";
		}
		else if (a == "CIAO")
		{
			cout << "ITALIAN\n";
		}
		else if (a == "ZDRAVSTVUJTE")
		{
			cout << "RUSSIAN\n";
		}
		else
		{
			cout << "UNKNOWN\n";
		}
	}
}