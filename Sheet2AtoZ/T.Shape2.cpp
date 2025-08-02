#include <iostream>
#include <string>
using namespace std;

int main() {
	int Count;
	cin >> Count;
	int CountS = 1;
	while (Count--)
	{
		for (int i = 0; i < Count; i++)
		{
			cout << " ";
		}
		for (int i = 0; i < CountS; i++)
		{
			cout << "*";
		}
		CountS +=2; cout << endl;
	}

}