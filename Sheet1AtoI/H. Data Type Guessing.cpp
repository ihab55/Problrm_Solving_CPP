#include <iostream>
using namespace std;


int main() {
	long long integer;
	double a, b, c, result;
	int fraction;
	cin >> a >> b >> c;
	result = (a * b) / c;
	integer = result; // Get the integer part of the result
	fraction = (result - integer) * 100;
	if (fraction > 0)
	{
		cout << "double" << endl;
	}
	else if (result > INT_MAX || result < INT_MIN)
	{
		cout << "long long" << endl;
	}
	else
	{
		cout << "int" << endl;
	}
	return 0;
}
