#include <iostream>
using namespace std;
int main()
{
	float Num;
	cin >> Num;
	int intPart = (int)Num;
	float decPart = Num - intPart;
	if (decPart == 0)
	{
		cout << "int" << " " << intPart;
	}
	else {
		cout << "float" << " " << intPart << " " << decPart;
	}
}