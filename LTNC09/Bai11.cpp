#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;
    string binary = "";
    while (n > 0) {
        int remainder = n % 2;
        binary = to_string(remainder) + binary;
        n /= 2;
    }
    int maxConsecutiveOnes = 0;
    int currentConsecutiveOnes = 0;
    for (char digit : binary) {
        if (digit == '1') {
            currentConsecutiveOnes++;
            maxConsecutiveOnes = max(maxConsecutiveOnes, currentConsecutiveOnes);
        } else {
            currentConsecutiveOnes = 0;
        }
    }
    cout << maxConsecutiveOnes << endl;
    return 0;
}

