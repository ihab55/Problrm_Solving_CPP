#include <iostream>
using namespace std;
int main()
{
	int A, B;
	char Relation; 
	cin >> A >> Relation >> B;
	switch (Relation)
	{
	case '<':
		cout << (A < B ? "Right" : "Wrong");
		break;
	case '>':
		cout << (A > B ? "Right" : "Wrong");
		break;
	case '=':
		cout << (A == B ? "Right" : "Wrong");
		break;
	}
}