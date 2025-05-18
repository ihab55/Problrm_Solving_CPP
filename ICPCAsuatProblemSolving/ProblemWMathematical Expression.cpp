#include <iostream>
using namespace std;
int main()
{
	int A, B, C;
	char R, Q = '=';
	cin >> A >> R >> B >> Q >> C;
	switch (R)
	{
	case '+':
		if (A + B == C)
		{
			cout << "Yes";
			return 0;
		}
		cout << A + B;
		break;
	case '-':
		if (A - B == C)
		{
			cout << "Yes";
			return 0;
		}
		cout << A - B;
		break;
	case '*':
		if (A * B == C)
		{
			cout << "Yes";
			return 0;
		}
		cout << A * B;
		break;
	}
}