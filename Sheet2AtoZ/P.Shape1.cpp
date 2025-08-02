#include <iostream>
#include <string>
#include <queue>
using namespace std;


int main() {
	int Num;
	cin >> Num;
	for (int i = Num;i >= 1; i--)
	{
		int Repert = i;
		while (Repert--) {
			cout << "*";
		}
		cout << endl;
	}
}