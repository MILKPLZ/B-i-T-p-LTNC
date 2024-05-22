#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        string s;
        cin>>s;
        string s1= {},s2= {};
        for(int i=0; i<s.length(); i++)
        {

            if(i%2==0)
            {
                s1=s1+s[i];
            }
            else
            {
                s2=s2+s[i];
            }
        }
        cout<<s1<<" "<<s2<<endl;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}

