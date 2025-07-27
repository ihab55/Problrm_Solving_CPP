#include <iostream>
using namespace std;

void MakeNum1Max(int& Num1, int& Num2) {
	if (Num2 > Num1)
	{
		int Temp = Num2;
		Num2 = Num1;
		Num1 = Temp;
	}
}
int main() {
	int Num1, Num2, MakeDevisonForNum1And2 = 1;
	cin >> Num1 >> Num2;
	MakeNum1Max(Num1, Num2);
	if (Num1 % Num2 == 0)
	{
		cout << Num2;
		return 0;
	}
	for (int i = 2; i <= Num2 / 2; i++)
	{
		if (Num1 % i == 0 && Num2 % i == 0)
		{
			MakeDevisonForNum1And2 = i;
		}
	}
	cout << MakeDevisonForNum1And2;
}