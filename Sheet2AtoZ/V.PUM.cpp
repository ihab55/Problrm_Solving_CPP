#include <iostream>
using namespace std;
int main() {
    int Lines, Start = 1;
    cin >> Lines;
    while (Lines--) {
        for (Start; Start <= Start+3; Start++)
        {
            if (Start % 4 == 0)
            {
                ++Start;break;
            }
            cout << Start << " ";
        }
        cout << "PUM\n";
    }
    return 0;
}