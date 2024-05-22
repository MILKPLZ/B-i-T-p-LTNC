
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    int T;
    cin>>T;
    for(int i=0; i<T; i++)
    {
        int n,p;
        cin>>n>>p;
        if(n>=0&&p>=0)
        {
            cout<<pow(n,p)<<endl;
        }
        else
        {
            cout<<"n and p should be non-negative"<<endl;
        }
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
