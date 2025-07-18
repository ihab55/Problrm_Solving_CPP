#include <iostream>
using namespace std;


int main() {
	int Num ,EVEN = 0 ,ODD = 0,Positve =0 ,Negtive = 0;
	cin >> Num;

	for (int i = 1; i <= Num; i++)
	{
		int x = 0;
		cin >> x;
		if (x % 2 == 0) {
			EVEN++;
		} else {
			ODD++;
		}
		if (x > 0) {
			Positve++;
		} else if (x < 0) {
			Negtive++;
		}
	}
	cout << "Even: " << EVEN << endl;
	cout << "Odd: " << ODD << endl;
	cout << "Positive: " << Positve << endl;
	cout << "Negative: " << Negtive << endl;
}
