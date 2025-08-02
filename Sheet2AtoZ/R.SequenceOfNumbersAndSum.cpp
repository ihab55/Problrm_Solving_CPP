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
	while (true) {
		int Num1, Num2, Sum = 0;
		cin >> Num1 >> Num2;
		if (Num1 < 1 || Num2 < 1)return 0;
		MakeNum1IsGreater(Num1, Num2);
		for (Num2; Num2 <= Num1; ++Num2)
		{
			cout << Num2 << " ";
			Sum += Num2;
		}
		cout << "sum =" << Sum << endl;
	}
}