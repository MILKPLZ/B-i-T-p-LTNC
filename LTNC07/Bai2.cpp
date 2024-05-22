#include <bits/stdc++.h>
using namespace std;
void generateStrings(string s, int n, int k) {
    if (k == 0) {
        cout << s << endl;
        return;
    }
    for (char c = 'a'; c <= 'd'; ++c) {
        generateStrings(s + c, n, k - 1);
    }
}
int main() {
    int k = 3;
    string s = "";
    generateStrings(s, 4, k);
    return 0;
}
