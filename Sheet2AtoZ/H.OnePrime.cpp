#include <iostream>

using namespace std;

int main() {
	int PrimeNum = 0;
	cin >> PrimeNum;
	int DivPrime = PrimeNum / 2;
	for (int i = 2; i <= DivPrime; i++)
	{
		if (PrimeNum % i == 0)
		{
			cout << "NO" << endl;
			return 0;
		}
	}
	cout << "YES" << endl;
}