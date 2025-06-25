#include <iostream>
using namespace std;


int main() {

	long long A, B, C, D;
	cin >> A >> B >> C >> D;
	bool isFoued = false;
	if ((A + B - C) == D || (A + B * C) == D)
	{
		isFoued = true;
	}
	else if ((A - B + C) == D || (A - B * C) == D) {
		isFoued = true;
	}
	else if ((A * B + C) == D || (A * B - C) == D) {
		isFoued = true;
	}
	cout << (isFoued ? "YES" : "NO");
}
