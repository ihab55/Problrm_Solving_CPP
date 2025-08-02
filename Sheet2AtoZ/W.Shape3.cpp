#include <iostream>
using namespace std;
int main() {
    char S = '*';
    int Count, CounterSymbole = 1;
    cin >> Count;
    while (Count--) {
        for (int i = 1; i <= Count; i++)
        {
            cout << " ";
        }
        for (int i = 1; i <= CounterSymbole; i++)
        {
            cout << S;
        }
        cout << endl;
        CounterSymbole += 2;
    }
    Count = 0;
    while ((CounterSymbole-=2) != -1) {
        for (int i = 0; i < Count; i++)
        {
            cout << " ";
        }
        for (int i = 1; i <= CounterSymbole; i++)
        {
            cout << S;
        }
        ++Count;
        cout << endl;
    }
    return 0;
}