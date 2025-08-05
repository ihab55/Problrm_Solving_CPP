#include <iostream>
#include <queue>
using namespace std;

int main() {
	long long K;
	cin >> K;
	long long row = K / 4;
	long long Column;
	if (row % 2 == 0)
	{
		Column = K % 4;
	}
	else
	{
		Column = 3 - (K % 4);
	}
	cout << row << " " << Column << endl;
	return 0;
}
