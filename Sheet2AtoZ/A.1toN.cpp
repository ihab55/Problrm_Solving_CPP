#include <iostream>
using namespace std;
bool IsDevision(int Num1, int Num2) {
	if (Num1 % Num2 == 0 || Num2 % Num1==0)
		return true;
	else
		return false;
}

int main() {
	int Num ;
	cin >> Num;
	for (int i = 1; i <= Num; i++)
	{
		cout << i << endl;
	}

}
