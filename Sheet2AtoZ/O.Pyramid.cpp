#include <iostream>
#include <string>
#include <queue>
using namespace std;


int main() {
	int Num;
	cin >> Num;
	for (int i = 1;i <= Num; i++)
	{
		int Repert = i;
		while (Repert--) {
			cout << "*";
		}
		cout << endl;
	}
}