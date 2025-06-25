#include <iostream>
using namespace std;


int main() {
	int Odd, Even;
	cin >> Odd >> Even;
	if (Odd ==0 | Even ==0 | Odd - Even >= 2 || Odd - Even <= -2 )
	{
		cout << "NO";
	}else{ cout << "YES"; }
}
