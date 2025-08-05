#include <iostream>
#include <queue>
using namespace std;

int main() {
	int Iteration, Max = 0;
	cin >> Iteration;
	while (Iteration--) {
		long long Num;int Count = 0;
		cin >> Num;
		while (Num % 2 == 0) {
			Num /= 2;
			++Count;
		}
		Max = (Max >= Count ? Max : Count);
	}
	cout << Max;
	return 0;
}
