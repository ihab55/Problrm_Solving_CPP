#include <iostream>
using namespace std;

int main() {
    unsigned int Num1, Num2;
    cin >> Num1 >> Num2;
    int MinusAnswer = Num1 - Num2;
    cout << (MinusAnswer >= 0 ? MinusAnswer : 0);
    return 0;
}
