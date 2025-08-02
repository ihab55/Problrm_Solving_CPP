#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    int Start, end;
    cin >> Start >> end;
    int Counter = 0;
    for (int i = 0; i <= Start; i++)
    {
        for (int Z = 0;Z <= Start;Z++) {
            if (end - i - Z >= 0 && end - i - Z <= Start) {
                Counter++;
            }
        }
    }
    cout << Counter << endl;
    return 0;
}
