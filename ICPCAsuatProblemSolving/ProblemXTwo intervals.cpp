#include <iostream>
using namespace std;
int main()
{
	long X1, Y1, X2, Y2;
	cin >> X1 >> Y1 >> X2 >> Y2;
	if (X2 <= X1 && X1 <= Y2)
	{
		cout << X1 << " " << ((Y1 <= Y2) ? Y1 : Y2);
	}
	else if (X1 <= X2 && X2 <= Y1) {
		cout << X2 << " " << ((Y1 <= Y2) ? Y1 : Y2);
	}
	else
	{
		cout << -1;
	}
}