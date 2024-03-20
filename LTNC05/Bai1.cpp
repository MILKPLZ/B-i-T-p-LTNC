#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
void solve(int &a,int &b)
{
    int m=a+b;
    int n=abs(a-b);
    cout<<m<<endl;
    cout<<n;
}
int main()
{
    int a,b;
    cin>>a>>b;
    solve(a,b);
    return 0;
}


