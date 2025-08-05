#include <iostream>
#include <queue>
using namespace std;

int main() {
    int Lenth , NumberOfMini;
    cin >> Lenth >> NumberOfMini;
    queue <int> Mimus;
    for (int i = 0; i < Lenth; i)
    {
        int Min = INT_MAX;
        NumberOfMini = (NumberOfMini < (Lenth - i) ? NumberOfMini : Lenth-i);
        for (int j=0; j < NumberOfMini ;++j)
        {
            int Num;
            cin >> Num;
            Min = (Num < Min ? Num : Min);
            i++;
        }
        Mimus.push(Min);
    }
    while(!Mimus.empty()){
        cout << Mimus.front() << " ";
        Mimus.pop();
    }
    return 0;
}
