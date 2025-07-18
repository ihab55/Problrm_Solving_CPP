#include <iostream>
using namespace std;


int main() {
	long long Eyes, Mouth, Body, NumOfToy = 0;
	cin >> Eyes >> Mouth >> Body;
	if ((Mouth >=  Eyes && Mouth >= Body) || (Mouth >= Eyes && Mouth <= Body) || (Mouth <= Eyes &&
		Mouth >= Body))
	{
		cout << min(Eyes, Body) << endl;
	}
	else if (Mouth < Body && Mouth < Eyes)
	{
		NumOfToy = Mouth;
		Eyes -= Mouth;
		Body -= Mouth;
		NumOfToy += min(Eyes/2, Body);
		cout << NumOfToy << endl;
	}
}
