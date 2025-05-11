#include <iostream>
using namespace std;
int main()
{
	char C;
	cin >> C;
	if (C > 90) {
		C -= 32;
	}
	else
	{
		C += 32;
	}
	cout << C << endl;
}