#include <iostream>
#include <string>
#include <queue>
using namespace std;


int main() {
	char S;
	int Count;
	cin >> S >> Count;
	queue<int>RepatedS;
	for (int i = 1; i <= Count; i++)
	{
		int X;
		cin >> X;
		RepatedS.push(X);
	}
	for (int i = 1; i <= Count; i++)
	{
		for (int j = RepatedS.front(); j > 0; j--)
		{
			cout << S;
		}
		RepatedS.pop();
		cout << endl;
	}
}