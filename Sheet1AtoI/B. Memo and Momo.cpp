#include <iostream>
using namespace std;


int main() {

	long long Memo, Momo, Dev;
	cin >> Memo >> Momo >> Dev;
	if (Memo % Dev == 0 || Momo % Dev == 0)
	{
		if (Memo % Dev == Momo % Dev)
		{
			cout << "Both";
		}
		else if (Momo % Dev == 0)
		{
			cout << "Momo";
		}
		else
		{
			cout << "Memo";
		}
	}
	else
	{
		cout << "No One";
	}
	return 0;
}
