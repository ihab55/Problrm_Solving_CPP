#include <iostream>
using namespace std;
bool IsDevision(int Num1, int Num2) {
	if (Num1 % Num2 == 0 || Num2 % Num1==0)
		return true;
	else
		return false;
}

int main() {
	int Num , Num1 , Num2;
	cin >> Num;
	Num2 = Num % 10;
	Num1 = Num / 10;
	if ((Num2 == 0 || Num1 == 0) || IsDevision(Num1, Num2)) {
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}

}
