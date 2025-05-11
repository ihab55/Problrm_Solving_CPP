#include <iostream>
using namespace std;
int main()
{
	string X;
	cin >> X;
	cout << ( (int)X[0] % 2 == 0 ? "EVEN" : "ODD") << endl;
}