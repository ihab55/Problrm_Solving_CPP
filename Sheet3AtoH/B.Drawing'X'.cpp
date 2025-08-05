#include <iostream>
using namespace std;

int main() {
    int Lenth = 0;
    cin >> Lenth;
    for (int i = 1; i <= Lenth; ++i)
    {
        for (int j = 1; j <= Lenth; ++j) {
            if (j == (Lenth/2)+1 && i ==j)
            {
                cout << "X";
            }else if (i == j)
            {
                cout << "\\";
            }
            else if (j == Lenth - i+1) { cout << "/"; }
            else {
                cout << "*";
            }
        }
        cout << endl;
    }
    return 0;
}
