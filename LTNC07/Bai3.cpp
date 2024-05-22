#include <iostream>
#include <cmath>
using namespace std;

int powerSum(int X, int N, int current = 1) {
    if (X == 0) {
        return 1;
    }
    if (X < 0 || current > X) {
        return 0;
    }
    int with_current = powerSum(X - pow(current, N), N, current + 1);
    int without_current = powerSum(X, N, current + 1);
    return with_current + without_current;
}

int main() {
    int X,N;
    cin>>X>>N;
    cout << powerSum(X, N) << endl;
    return 0;
}

