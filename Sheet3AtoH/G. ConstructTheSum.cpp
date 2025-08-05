#include <iostream>
#include <stack>
using namespace std;

int main() {
	int Iteration;
	stack<int> AddMaxNumToAdd;
	cin >> Iteration;
	while (Iteration--) {
		int Num;long long Adtional, Sum = 0;
		cin >> Num >> Adtional;       // 10   7
		if (((long long)Num * (Num + 1) / 2) < Adtional)
		{
			cout << "-1\n";
			continue;
		}
		for (Num; Num >= 1; Num--)
		{
			if (Sum + Num <= Adtional)
			{
				Sum += Num;
				AddMaxNumToAdd.push(Num);
			}
			if (Sum == Adtional)
			{
				break;
			}
		}
		while (!AddMaxNumToAdd.empty()) {
			cout << AddMaxNumToAdd.top() << " ";
			AddMaxNumToAdd.pop();
		}
		cout << endl;
	}
	return 0;
}
