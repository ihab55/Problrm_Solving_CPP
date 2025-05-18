#include <iostream>
using namespace std;
int main()
{

	long A, B, C, D;
	cin >> A >> B >> C >> D;
	int Resualt = ((A % 100) * (B % 100) * (C % 100) * (D % 100)) % 100;
	if (Resualt > 9)
	{
		cout << Resualt;
	}
	else
	{
		printf("0%d", Resualt);
	}

}