#include <iostream>
using namespace std;

int main() {
	int Num ;
	cin >> Num;
	if (Num <= 1)
	{
		cout << -1 << endl;
		return 0;
	}
	for (int i = 1; i <= Num; i++)
	{
		if (i%2==0)
		{
			cout << i << endl;
		}
	}

}
