#include <iostream>
using namespace std;


int main() {

	char Alpha, NextChar;
	cin >> Alpha;
	NextChar = (Alpha == 122) ? 'a' : char(Alpha + 1);
	cout << NextChar;
	return 0;
}
