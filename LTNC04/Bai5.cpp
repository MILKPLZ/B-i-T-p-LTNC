#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    int a[n],b[n+1];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n+1;i++)
    {
        cin>>b[i];
    }
    int sum1=0;
    int sum2=0;
    for(int i=0;i<n;i++)
    {
        sum1=sum1+a[i];
        sum2=sum2+b[i];
    }
    sum2=sum2+b[n];
    cout<<sum2-sum1;
}
