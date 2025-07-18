#include <iostream>
using namespace std;


int main() {
	int Count;
	long Max = 0;
	cin >> Count;
	for (int i = 0; i < Count; i++)
	{
		long x;
		cin >> x;
		if (x > Max) {
			Max = x;
		}
	}
	cout << Max << endl;
}
