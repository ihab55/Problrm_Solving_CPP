#include <iostream>
#include <string>
using namespace std;

int main() {
	string N;
	cin >> N;
	string RN;
	RN = N;
	int Count = 0;
	for (int i = RN.length()-1; i >= 0; i--)
	{
		RN[Count] = N[i];
		++Count;
	};
	int Rint = stoi(RN);
	cout << Rint << endl << ((Rint == stoi(N)) ? "YES" : "NO") << endl;
}