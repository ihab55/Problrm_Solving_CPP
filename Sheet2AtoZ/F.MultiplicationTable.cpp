#include <iostream>
using namespace std;


int main() {
	int Num;
	cin >> Num;
	for (int i = 1; i <= 12; i++)
	{
		printf("%d * %d = %d\n", Num, i, Num * i);
	}
}
