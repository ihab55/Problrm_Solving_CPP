#include <iostream>
using namespace std;
int main()
{
	int Num1, Num2, Num3;
	cin >> Num1 >> Num2 >> Num3;
	if (Num1 <= Num2 && Num1 <= Num3)
	{
		if (Num2 <= Num3)
		{
			cout << Num1 << "\n" << Num2 << "\n" << Num3 << "\n";
		}
		else {
			cout << Num1 << "\n" << Num3 << "\n" << Num2 << "\n";
		}
	}
	else if (Num2 <= Num1 && Num2 <= Num3)
	{
		if (Num1 <= Num3)
		{
			cout << Num2 << "\n" << Num1 << "\n" << Num3 << "\n";
		}
		else {
			cout << Num2 << "\n" << Num3 << "\n" << Num1 << "\n";
		}
	}
	else
	{
		if (Num1 <= Num2)
		{
			cout << Num3 << "\n" << Num1 << "\n" << Num2 << "\n";
		}
		else {
			cout << Num3 << "\n" << Num2 << "\n" << Num1 << "\n";
		}
	}
	cout << "\n" << Num1 << "\n" << Num2 << "\n" << Num3;
}