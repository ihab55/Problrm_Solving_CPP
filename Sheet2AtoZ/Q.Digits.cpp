#include <iostream>
#include <string>
#include <queue>
using namespace std;


int main() {
	int Count;
	cin >> Count;
	while (Count--) {
		string Num;
		cin >> Num;
		for (int i = Num.length()-1; i >= 0; i--)
		{
			cout << Num[i] << " ";
		}
		cout << endl;
	}
}