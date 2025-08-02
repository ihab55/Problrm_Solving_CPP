#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int FibonacciEq(int Num) {
    switch (Num) {
    case 1:
        return 0;
    case 2:
        return 1;
    default:
        return -99;
    }
}
int main() {
    int Lines;
    cin >> Lines;
    int CurrentNum = 0, PrevNum = 0, Temp = 0;
    for (int i = 1; i <= Lines; i++)
    {
        Temp = CurrentNum;
        CurrentNum = FibonacciEq(i);
        CurrentNum = (CurrentNum == -99 ? Temp + PrevNum : CurrentNum);
        cout << CurrentNum << " ";
        PrevNum = Temp;
    }
    return 0;
}
