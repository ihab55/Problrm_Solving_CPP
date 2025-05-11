#include <iostream>
using namespace std;
int main()
{
	char S;
	int A, B;
	cin  >> A >> S >> B;
	switch (S)
	{
	case '+':
		cout << A + B;
		break;
	case '-':
		cout << A - B;
		break;
	case '*':
		cout << A * B;
		break;
	case '/':
		cout << A / B;
		break;
	}
}