#include <iostream>
using namespace std;

int main() {
	int Num;
	cin >> Num;
	for (int i = 1; i <= Num / 2; i++)
	{
		if (Num % i == 0)cout << i << endl;
	}
	cout << Num << endl;
	
}