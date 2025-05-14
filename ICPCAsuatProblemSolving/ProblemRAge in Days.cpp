#include <iostream>
using namespace std;
int main()
{
	int Age;
	cin >> Age;
	int Years = Age / 365;
	Age -= Years * 365	 ;
	int month = Age / 30 ;
	 Age -= month * 30	 ;
	 cout << Years << " years\n" << month << " months\n" << Age << " days";
}