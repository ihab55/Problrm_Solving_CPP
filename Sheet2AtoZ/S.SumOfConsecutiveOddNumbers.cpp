#include <iostream>
#include <string>
#include <queue>
using namespace std;

void MakeNum1IsGreater(int& Num1, int& Num2) {
	if (Num2 > Num1)
	{
		int Temp = Num2;
		Num2 = Num1;
		Num1 = Temp;
	}
}
int main() {
	int Count;
	cin >> Count;
	while (Count--)
	{
		int Num1, Num2, SumODD = 0;
		cin >> Num1 >> Num2;
		MakeNum1IsGreater(Num1, Num2);
		for (++Num2; Num2 < Num1; ++Num2)
		{
			if (Num2 % 2 != 0)
			{
				SumODD += Num2;
			}
		}
		cout << SumODD << endl;
	}
}