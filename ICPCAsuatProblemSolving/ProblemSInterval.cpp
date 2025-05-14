#include <iostream>
using namespace std;
int main()
{
	float Num;
	cin >> Num;
	if (Num < 0 || Num > 100)
	{
		cout << "Out of Intervals";
	}
	else if (Num >= 0 && Num <= 25)
	{
		cout << "Interval [0,25]";
	}
	else if (Num >= 25 && Num <= 50)
	{
		cout << "Interval (25,50]";
	}
	else if (Num >= 50 && Num <= 75)
	{
		cout << "Interval (50,75]";
	}
	else
	{
		cout << "Interval (75,100]";
	}
}