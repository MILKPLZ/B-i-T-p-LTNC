#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int factorial(int num){
    if(num > 1)
        {return num * factorial(num - 1);}
        return num;
    }


int main() {
    int n;
    cin >> n;
    cout << factorial(n);

    return 0;
}

