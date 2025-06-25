
#include <iostream>
#include<cmath>
using namespace std;


int main() {
	float PriceBeforeTax , TaxRate;
	int  PriceAfterTax;
	cin >> TaxRate >> PriceAfterTax;
	PriceBeforeTax = (1-TaxRate/100)/PriceAfterTax;
	PriceBeforeTax = pow(PriceBeforeTax,-1);
	cout << PriceBeforeTax << endl;
}
