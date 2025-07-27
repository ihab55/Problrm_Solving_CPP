#include <iostream>
#include <string>
using namespace std;

bool IsContain4Or7Only(string S) {
	for (int i = 0; i < S.length(); i++)
	{
		if (S[i] != '4' && S[i] != '7') return false;
	}
	return true;
}
int main() {
	int sNum, mNum, LuckyNum;
	cin >> sNum >> mNum;
	bool FlagNotFounded = true;
	for (sNum; sNum <= mNum; sNum++)
	{
		if (IsContain4Or7Only(to_string(sNum)))
		{
			FlagNotFounded = false;
			cout << sNum << " ";
		}
	}
	if (FlagNotFounded) cout << -1;
}