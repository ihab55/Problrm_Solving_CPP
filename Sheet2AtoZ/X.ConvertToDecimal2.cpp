#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main() {
    int Lines, ones = 0;
    long long Summtion = 0;
    cin >> Lines;
    while (Lines--) {
        long long Number;
        cin >> Number;
        while (Number) {
            if (Number % 2 != 0)
            {
                ++ones;
            }
            Number /= 2;
        }
        for (int i = 0; i < ones; i++)
        {
            Summtion += pow(2, i);
        }
        cout << Summtion << endl;
        Summtion = ones = 0;
    }
    return 0;
}
