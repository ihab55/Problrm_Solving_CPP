#include <iostream>
using namespace std;

int main() {
	int Num;
	cin >> Num;
	bool Flage = false;
	for (int i = 2; i <= Num; i++)
	{
		Flage = false;
		for (int j = 2; j < i; j++) {
			if (Flage = (i % j == 0)) break;
		}
		if (!Flage) cout << i << " ";
	}
}