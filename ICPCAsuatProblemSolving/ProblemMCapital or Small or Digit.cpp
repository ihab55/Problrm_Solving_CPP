#include <iostream>
using namespace std;
int main()
{
	char C; 
	cin >> C;
	if (C >= 65 && C <= 122)
	{
		cout << "ALPHA\n";
		cout << (C >= 97 ? "IS SMALL" : "IS CAPITAL") ;
	}
	else if (C >= 48 && C <= 57)
	{
		cout << "IS DIGIT";
	}
}