#include <iostream>
#include <limits>

using namespace std;

const int matrix_size = 6;

int hourglassSum(int arr[matrix_size][matrix_size]) {
    int maxSum = numeric_limits<int>::min();

    for (int i = 0; i < matrix_size - 2; ++i) {
        for (int j = 0; j < matrix_size - 2; ++j) {
            int currentSum = arr[i][j] + arr[i][j + 1] + arr[i][j + 2]
                             + arr[i + 1][j + 1]
                             + arr[i + 2][j] + arr[i + 2][j + 1] + arr[i + 2][j + 2];
            maxSum = max(maxSum, currentSum);
        }
    }

    return maxSum;
}

int main() {
    int arr[matrix_size][matrix_size];

    // Input
    for (int i = 0; i < matrix_size; ++i) {
        for (int j = 0; j < matrix_size; ++j) {
            cin >> arr[i][j];
        }
    }

    // Output
    int result = hourglassSum(arr);
    cout << result << endl;

    return 0;
}
