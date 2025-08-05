#include <iostream>
#include <queue>
using namespace std;
void MakeNum1Max(unsigned long long& Num1, unsigned long long& Num2) {
    if (Num2 > Num1)
    {
        long long Temp = Num1;
        Num1 = Num2;
        Num2 = Temp;
    }
}
int main() {
    int Lenth;
    cin >> Lenth;
    while (Lenth--) {
        unsigned long long Start, End;
        cin >> Start >> End;
        MakeNum1Max(End, Start);
        unsigned long long  Sum = ((End * (End + 1) / 2) - (Start * (Start + 1) / 2) + Start);
        cout << Sum << endl;
    }
    return 0;
}
