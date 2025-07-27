#include <iostream>

using namespace std;

int main() {
	int Count = 0;
	cin >> Count;
	for (int i = 0; i < Count; i++)
	{
		long long Multiplier = 1;
		int Num;
		cin >> Num;
		for (int y = Num; 0 < y; y--)
		{
			Multiplier *= y;
		}
		cout << Multiplier << endl;
	}
}