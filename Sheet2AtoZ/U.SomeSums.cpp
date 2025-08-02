#include <iostream>
using namespace std;
int main() {
     // 20    2     5    
    int num, dig1, dig2, someOfSum = 0;
    cin >> num >> dig1 >> dig2;
    for (int i = 1;i <= num;i++) { //20 loop
        int sum = 0;
        for (int j = i;j > 0;j /= 10) {
            int counter = j % 10;
            sum += counter;
        }
        if (dig1 <= sum && dig2 >= sum)
        {
            someOfSum += i;
        }
    }
    cout << someOfSum;
    return 0;
}