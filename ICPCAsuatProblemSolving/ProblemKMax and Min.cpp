
#include <iostream>
using namespace std;


int main() {
	int A, B,C;
	cin >> A >> B >> C;
	if (A>=B && A >= C)
	{
		cout << ((B >= C) ? C:B) << ' ' << A;
	}else if (B >= A && B >= C)
	{
		cout << ((A >= C) ? C : A) << ' ' << B;
	}
	else {
		cout << ((A >= B) ? B : A) << ' ' << C;
	}
}
