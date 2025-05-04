#include <iostream>
using namespace std;
int main()
{
	long long x, y;
	cin >> x >> y;
	int LastNumInX = x % 10;
	int LastNumInY = y % 10;
	int Sum = LastNumInX + LastNumInY;
	cout << Sum << endl;
}


