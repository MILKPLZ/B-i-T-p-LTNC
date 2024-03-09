#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    double am=0,duong=0,khong=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>0)
        {
            duong++;
        }
        if(arr[i]==0)
        {
            khong++;
        }
        if(arr[i]<0)
        {
            am++;
        }
    }
    cout<<fixed<<setprecision(6)<<duong/n<<endl
    <<am/n<<endl
    <<khong/n<<endl;

}

