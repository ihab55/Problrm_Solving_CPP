#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	long long A, C, P1, P2;
	cin >> A >> P1 >> C >> P2;
	double Res1 = P1 * log(A);
	double Res2 = P2 * log(C);
	if (Res1 > Res2 )
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}
}